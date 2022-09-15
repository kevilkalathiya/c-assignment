#include<stdio.h>
int main()
{
	int year;
	  
    printf("enter the the value:");
    scanf("%d",&year);
    
    if(year%400==0)
    {
    	printf("year is the century year....");
    	
	}
	
	else
	{
		printf("year is not century year.....");
	}
	
	return 0;
}