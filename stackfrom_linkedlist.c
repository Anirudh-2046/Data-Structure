#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
} *top = NULL;       //struct Node* top = NULL;

void push(int val){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
        printf("Stack Overflow!!!\n");
    else{
        temp->data=val;
        temp->next=top;
        top=temp;
        printf("Push %d into stack!!!\n",val);
    }
}
int pop(){
    if(top==NULL){
        printf("Stack Underflow!!!\n");
        return -1;
    }
    else{
        int val=top->data;
        struct Node* temp=top;
        top=top->next;
        free(temp);
        return val;
    }
}
int peek(){
    if(top==NULL){
        printf("Stack is Empty!!\n");
        return -1;
    }
    else
        return top->data;
}
void show(){
    if(top==NULL){
        printf("Stack is Empty!!\n");;
    }
    else{
        printf("Stack Elements are:\n");
        struct Node *temp=top;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");
        int choice,data;
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter value:");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                data=pop();
                if(data!=-1)
                    printf("%d pop from Stack",data);
                break;
            
            case 3:
                data=peek();
                if(data!=-1)
                    printf("%d is topmost element of stack",data);
                break;

            case 4:
                show();
                break;

            case 5:
                exit(0);
            default:
                printf("Inavlid choice!!!!\n");
        }
        printf("\n");
    }
}