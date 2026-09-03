#include<stdio.h>
struct student{
    int roll;
    char name[50];
    int marks;
};

int main(){
    struct Student[5];

    for (int i=0;i<5;i++){
        printf("Enter roll number,name and marks of student %d: ",i+1);
        scanf("%d %s %d",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("\nStudent Details:\n");

    for(int i=0;i<5;i++){
        printf("Roll No: %d\n",s[i].roll);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %d\n",s[i].marks);
        printf("\n");
    }
    return 0;
}