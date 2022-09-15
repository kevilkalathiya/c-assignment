#include<stdio.h>
int main()
{
	int num1,num2,modulo;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	modulo=num1%num2;
	printf("modulo of %d/%d =%d",num1,num2,modulo);
	
	return 0;
}