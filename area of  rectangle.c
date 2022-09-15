#include<stdio.h>
int main()
{
	float  width,length,area;
	
	printf("enter the width:");
	scanf("%f",&width);
	
	printf("enter the length:");
	scanf("%f",&length);
	
	area=width*length;
	printf("area of rectangle is : %.2f",area);
	
	return 0;
}