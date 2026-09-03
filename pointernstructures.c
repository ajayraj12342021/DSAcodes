#include<stdio.h>
struct Student{
    int rollno;
    float marks;
};

int main(){
    struct Student s={101,54.5};
    struct Student *p=&s;
    printf("Roll No: %d\n",p ->rollno);
    printf("Marks: %.2f\n",p->marks);
    return 0;
}