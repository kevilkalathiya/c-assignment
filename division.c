#include<stdio.h>
int main()
{
	float num1,num2,division;
	 
	
	printf("enter the first number:");
	scanf("%f",&num1);
	
	printf("enter the second number:");
	scanf("%f",&num2);
	
	division=num1/num2;
	printf("division of %.f/%.f=%.2f",num1,num2,division);
	
	return 0;
}                                 