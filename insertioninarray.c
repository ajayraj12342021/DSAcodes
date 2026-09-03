#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int element=5;
    int position=5;
    for(int i=n; i>=position; i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=element;
    n++;

    printf("Array after insertion:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}