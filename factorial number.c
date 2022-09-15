#include<stdio.h>
int main()
{
   
    double factorial=1,x,number;
	
	printf("enter the number : ");
	scanf("%lf",&number);
	
	for(x=number;x>=1;x--)
	{
		factorial=factorial*x;
	}
	printf("factorial number is : %.lf",factorial);
	
	return 0;
}