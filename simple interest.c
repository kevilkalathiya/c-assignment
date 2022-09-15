#include<stdio.h>
int main()
{
	float principal_amount, annual_intrest, time, s_i;
	printf("enter the principle amount :");
	scanf("%f" , &principal_amount);
	printf("enter the intrest amount :");
	scanf("%f",& annual_intrest);
	printf("enter the time duration :");
	scanf("%f",&time);
	
	
	s_i= (principal_amount*annual_intrest*time)/100;
	printf("simple interest : %.2f",s_i);
	
	return 0;	
}