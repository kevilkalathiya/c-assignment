#include<stdio.h>
int main()
{
	int year;
	  
    printf("enter the the year:");
    scanf("%d",&year);
    
    if(year%4==0)
    {
    	printf("year is the leap year....");
    	
	}
	
	else
	{
		printf("year is not leap year.....");
	}
	
	return 0;
}