#include<stdio.h>

struct employee
{
	char name[100];
	char address[100];
	int number;
	int age;
	 
};

int main()
{
	struct employee k[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter the %d employee details : \n",i+1);
	
		printf("enter the name : ");
		scanf("%s",&k[i].name);
		printf("enter the address : ");
		scanf("%s",&k[i].address);
		printf("enter the number : ");
		scanf("%d",&k[i].number);
		printf("enter the age : ");
		scanf("%d",&k[i].age);
		
	}
	
	for(i=0;i<5;i++)
	{   printf("\n%d employee details : \n",i+1);
		printf("name=%s \naddress=%s \nnumber=%d \nage=%d\n",k[i].name,k[i].address,k[i].number,k[i].age);
	}
    return 0;
}




//int main()
//{
//	struct employee e,e1,e2;
//	scanf("%s",&e.name);
//	scanf("%s",&e.address);
//	scanf("%d",&e.number);
//	scanf("%d",&e.age);
//	
//	printf("%s %s %d %d",e.name,e.address,e.number,e.age);
//	
//
//	scanf("%s",&e1.name);
//	scanf("%s",&e1.address);
//	scanf("%d",&e1.number);
//	scanf("%d",&e1.age);
//	
//	printf("%s %s %d %d",e1.name,e1.address,e1.number,e1.age);
//	
//	scanf("%s",&e2.name);
//	scanf("%s",&e2.address);
//	scanf("%d",&e2.number);
//	scanf("%d",&e2.age);
//	
//	printf("%s %s %d %d",e2.name,e2.address,e2.number,e2.age);
//}