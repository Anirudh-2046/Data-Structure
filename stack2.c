#include <stdio.h>

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
        scanf("%d",&value);
        stack[++top] = value;
    }
}

void pop(){
    if(isEmpty()){
        printf("Stack Underflow!!!!\n");
    }
    else{
        top--;
    }
}

void show(){
    if(isEmpty()){
        printf("Stack is Empty!!\n");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&stack[i]);
        top++;
    }
    for(int i=0;i<2;i++){
        pop();
    }
    for(int i=0;i<4;i++){
        push();
    }
    pop();
    for(int i=0;i<2;i++){
        push();
    } 
    for(int i=0;i<3;i++){
        pop();
    }       
    show();
    return 0;
}   