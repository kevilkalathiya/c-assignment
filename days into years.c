#include<stdio.h>
int main()
{
	float year,days;
	
	printf("enter the days:");
	scanf("%f",&days);
	
	year=days/365.2425;
	printf("%.f days into year is=%.3f",days,year);
	
	return 0;
}