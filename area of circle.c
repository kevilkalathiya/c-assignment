#include<stdio.h>
int main()
{
	float  radius,area,pi=3.14;
	
	printf("enter the radius:");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("area of circle is : %.2f",area);
	
	return 0;
}