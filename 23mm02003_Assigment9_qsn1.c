#include<stdio.h>
#include<string.h>
int main(){
    typedef struct office{
        char name[30];
        char address[50];
        int phone[11];
        int noofemployee;

    }office;
    office a;
    
    printf("enter the name of employee");
    scanf("%s",a.name);
    
    printf("enter the adress");
    scanf("%s",a.address);
    printf("enter the phone");
    scanf("%s",a.phone);
    printf("enter the no of employee");
    scanf("%d",a.noofemployee);


    printf("employee name %s\n",a.name);
    printf("adress %s\n",a.address);
    printf("phone number %s\n",a.phone);
    printf("no of employee %d",a.noofemployee);
    

   
    
}