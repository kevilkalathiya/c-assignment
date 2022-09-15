#include<stdio.h>
int main()
{
	float  base,height,area;
	
	printf("enter the base:");
	scanf("%f",&base);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	area=base*height/2;
	printf("area of triangle : %.2f",area);
	
	return 0;
}