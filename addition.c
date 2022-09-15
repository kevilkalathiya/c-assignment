#include<stdio.h>
int main()
{
	int num1,num2,num3,sum;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	printf("enter the third number:");
	scanf("%d",&num3);
	
	sum=num1+num2+num3;
	printf("sum of %d+%d+%d=%d",num1,num2,num3,sum);
	
	return 0;
}