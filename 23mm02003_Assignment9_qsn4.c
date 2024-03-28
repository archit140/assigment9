#include<stdio.h>
int main(){
    typedef struct address
    {
        char street[100];
        char city[100];
        char zipcode[100];
        
    } Address;
    struct person{
        char Name[100];
        Address a;

    }PERSON;
    printf("Enter the name of the person : ");
    scanf("%s",PERSON.Name);
    printf("\nEnter the street  : ");
    scanf("%s",PERSON.a.street);
    printf("\nEnter the city : ");
    scanf("%s",PERSON.a.city);
    printf("\nEnter the zipcode : ");
    scanf("%s",PERSON.a.zipcode);

     printf("\n%s",PERSON.Name);
    printf("\n%s",PERSON.a.street);
    printf("\n%s",PERSON.a.city);
    printf("\n%s",PERSON.a.zipcode);



    
}