#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter searching element:");
    scanf("%d",&k);
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k)
            break;
        else if(k<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    if(start<=end)
        printf("Found!!");
    else
        printf("Not Found!!");
    return 0;
}