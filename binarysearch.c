#include<stdio.h>

int main(){
    int a[100],n,x,high,low,mid;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to  search: ");
    scanf("%d",&x);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==x){
            printf("Element found at position %d",mid+1);
            break;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        printf("Element not found");
    }
    return 0;
}