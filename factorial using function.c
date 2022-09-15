#include<stdio.h>

int factorial()
{
	int number,i,factorial=1;
	
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
        printf("factorial number is=%d",factorial);
}

int main()
{
	factorial();
	
	return 0;
}