#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    int salary;
};

int main(){
    struct Employee e;
    e.id=1002;
    strcpy(e.name,"John Doe");
    e.salary=50000;

    printf("Employee ID: %d\n",e.id);
    printf("Employee Name: %s\n",e.name);
    printf("Employee Salary: %d\n",e.salary);
    return 0;
}

