#include<stdio.h>
int linearsearch(int arr[],int n,int x){
    for (int i = 0; i < n; i++) {
        if (arr[i]==x)
            return i;
    }
    return -1;
}
int main(){
    int arr[]={10, 20, 30, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int result=linearsearch(arr,n,x);
    if (result==-1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", result);
    return 0;
}