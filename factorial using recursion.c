#include<stdio.h>

int factorial(int x)
{
	if(x>1)
	{
	return x*factorial(x-1);
	}
}
int main()
{
	int number;
	printf("enter the number : ");
	scanf("%d",&number);
	printf("%d",factorial(number));
	return 0;
}