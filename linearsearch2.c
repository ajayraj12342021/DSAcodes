#include<stdio.h>
int main() {
    int arr[]={10, 20, 30, 40, 50};
    int n=sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int result=-1;
    for (int i = 0; i < n; i++) {
        if (arr[i]==x) {
            result=i;
            break;
        }
    }
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}