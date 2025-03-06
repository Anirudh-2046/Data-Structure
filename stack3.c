#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int stack[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stack[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(stack[i]<stack[j]){
                int a=stack[i];
                stack[i]=stack[j];
                stack[j]=a;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",stack[i]);
    }
    return 0;
}