#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>

int top=-1;
int operand[100];

int postfixExpressionEvaluation(char *str){
    int size = strlen(str);
    for(int i=0;i<size;i++){
        if(isdigit(str[i])){
            int num=0;
            while(isdigit(str[i])){
                num=num*10+str[i]-'0';
                i++;
            }
            i--;
            operand[++top]=num;
        }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^'){
            int z;
            int x=operand[top--];
            int y=operand[top--];
            switch(str[i]){
                case '+':
                z = y + x;
                break;
    
            case '-':
                z = y - x;
                break;
            
            case '*':
                z = y * x;
                break;
             
            case '/':
                z = y / x;
                break;
    
            case '^':
                z = pow(y,x);
                break;
            }
            operand[++top]=z;
        }
    }
    return operand[top--];
}

int main(){
    char str[100];
    printf("Enter Postfix Expression:");
    gets(str);
    printf("Result : %d\n",postfixExpressionEvaluation(str));
    return 0;
}
