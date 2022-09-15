#include<stdio.h>
int main()
{
	int number,num=0,i;
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	
	{
		if(number%i==0)
		{
			num++;
		}
	}
	if(num==2)
	{
		printf("number is prime...");
	}
	else
	{
		printf("not a prime number...");
	}
	
	return 0;
}