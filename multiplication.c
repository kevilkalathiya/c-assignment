#include<stdio.h>
int main()
{
	int num1,num2,num3,multiplication;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	printf("enter the third number:");
	scanf("%d",&num3);
	
	multiplication=num1*num2*num3;
	printf("multiplication of %d*%d*%d=%d",num1,num2,num3,multiplication);
	
	return 0;
}