#include<stdio.h>
int main()
{
	int  number,rem,firstDigit,lastDigit,sum;
	
	printf("enter the number : ");
	scanf("%d",&number);
	
	
	lastDigit=number%10;
	while(number>=10)//12>10
	{
		number=number/10;
	} 
	
	firstDigit=number; 
	sum=firstDigit+lastDigit;
	printf("sum of firsr and last number is : %d",sum);
	
	return 0;
}   