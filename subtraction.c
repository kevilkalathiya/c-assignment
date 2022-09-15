#include<stdio.h>
int main()
{
	int num1,num2,subtraction;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	subtraction=num1-num2;
	printf("subtraction of %d-%d=%d",num1,num2,subtraction);
	
	return 0;
}