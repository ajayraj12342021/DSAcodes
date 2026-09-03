#include<stdio.h>
int main(){
    int x=10;
    int *p;

    p=&x;
    printf("The value of x= %d\n",x);
    printf("The address of x= %p\n", (void*)&x);
    printf("The value of p= %p\n", (void*)p);
    printf("The value pointed by p= %d\n", *p);
    return 0;
}