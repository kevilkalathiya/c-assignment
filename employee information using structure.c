#include<stdio.h>

struct employee
{    
	int number;
	int age;
	char name[100];
	char address[100];
	
};

int main()
{    
    struct employee k;
    
    printf("enter the employee details : \n");
    printf("enter the name : ");
    gets(k.name);
    printf("enter the address : ");
    gets(k.address);
    printf("enter the number : ");
    scanf("%d",&k.number);
    printf("enter the age : ");
    scanf("%d",&k.age);
    
    printf("name=%s \naddress=%s \nnumber=%d \nage=%d",k.name,k.address,k.number,k.age);

   return 0;
}