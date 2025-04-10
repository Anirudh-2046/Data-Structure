#include<stdio.h>
#include<string.h>
int main(){
    int top = -1;
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(top >= 0 && str[top] == str[i])
            top--;        
        else{ 
            top++;
            str[top]=str[i];
        }
    }
    str[top+1]='\0';
    printf("%s",str);
    return 0;
}