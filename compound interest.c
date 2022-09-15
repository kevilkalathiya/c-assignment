#include<stdio.h>
#include<math.h>
int main()
{
	float amount,principal,interest,time,ci;
	
	printf("enter the principal amount : ");
	scanf("%f",&principal);
	
	printf("enter the interest : ");
	scanf("%f",&interest);
	
	printf("enter the time duration :");
	scanf("%f",&time);
	
	amount=principal*(pow((1+interest/100),time));
	ci=amount-principal;
	
	printf("future compound interst is = %.2f\n",amount);
	printf("compound interest = %.2f",ci);
	
	return  0;
}
