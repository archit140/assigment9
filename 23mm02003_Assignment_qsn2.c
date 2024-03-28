#include<stdio.h>
int main(){
    struct student{
        char name[100];
        char roll_no[100];
        char address[100];
        int age;
        int marks;
    } student[6];
    for(int i=0;i<6;i++){
        printf("Enter the name of student %d",i+1);
        scanf("%s",student[i].name);
        printf("Enter the rollno of student %d",i+1);
        scanf("%s",student[i].roll_no);
        printf("Enter the address of student %d",i+1);
        scanf("%s",student[i].address);
        printf("Enter the age of student %d",i+1);
        scanf("%d",&student[i].age);
        printf("Enter the marks of student %d",i+1);
        scanf("%d",&student[i].marks);
    }
    for(int i=0;i<6;i++){
        printf("Name of student is %s\n",student[i].name);
        printf("Rollno of student is %s\n",student[i].roll_no);
        printf("Address of student is %s\n",student[i].address);
        printf("Age of student is %d\n",student[i].age);
        printf("Marks of student is %d",student[i].marks);
        
        
    }
    return 1;
}