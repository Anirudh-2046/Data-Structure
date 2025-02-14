#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],top=-1;

int isEmpty(){
    return (top == -1) ? 1 : 0;
}

int isFull(){
    return (top == MAX-1) ? 1 : 0;
}

void push(){
    if(isFull()){
        printf("Stack Overflow!!!!\n");
    }
    else{
        int value;
        printf("Enter value:");
        scanf("%d",&value);
        top++;
        stack[top] = value;
        printf("Element Inserted!!!!\n");
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow!!!!\n");
        return INT_MIN;
    }
    else{
        int val=stack[top];
        top--;
        return val;
    }
}

int peek(){
    if(isEmpty()){
        printf("No topmost element!!\n");
        return INT_MIN;
    }
    else{
        return stack[top];
    }
}

void show(){
    if(isEmpty()){
        printf("Stack is Empty!!\n");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int choice,ele,res;
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                res=pop();
                if(res != INT_MIN)
                    printf("%d is pop from the stack\n",res);
                break;

            case 3:
                ele=peek();
                if(ele != INT_MIN)
                    printf("Top element is %d\n",ele);
                break;

            case 4:
                show();
                break;

            case 5:
                exit(0);

            default:
            printf("Invalid choice!!!!\n");
        }
        printf("\n");
        system("pause");
    }
    return 0;
}