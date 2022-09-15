#include<stdio.h>
int main()
{
	float year,days;
	
	printf("enter the year:");
	scanf("%f",&year);
	
	days=year*365.2425;
	printf("%.f year into days is=%.3f",year,days);
	
	return 0;
}