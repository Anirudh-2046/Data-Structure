#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tree[100];

void insert(int value,int root){
    if(tree[root]==-1)
        tree[root]=value;
    else if(value<tree[root])
        insert(value,2*root+1);
    else if(value>tree[root])
        insert(value,2*root+2);
}
int main() {
    int n,value;
    int sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<100;i++){
        tree[i]=-1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        insert(value,0);
        sum+=value;
    }
    printf("%d",sum);
    return 0;
}
