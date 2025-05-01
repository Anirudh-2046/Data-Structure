#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n;
    int tree[100];
    scanf("%d",&n);
    if(n==0)
        return 0;
    for(int i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    int min=tree[0];
    for(int i=1;i<n;i++){
        if(tree[i]!=-1){
            if(tree[i]<min){
                min=tree[i];
            }
        }
    }
    printf("%d",min);
    return 0;
}
