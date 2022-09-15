#include<stdio.h>
int main()
{
	int number,rem,max_number=0;
	
	printf("enter the number : ");
	scanf("%d",&number);
	
	while(number>0)
	{
		rem=number%10;
		if(rem>max_number)
		{
			max_number=rem;
		}
		number=number/10;
	} printf("max number is : %d",max_number);
	
	return 0;
}   