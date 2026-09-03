#include<stdio.h>
int main(){
    int a;
    a=10;
    int *p=&a;

    *p=50;
    printf("The value of a= %d\n",a);
    return 0;
}