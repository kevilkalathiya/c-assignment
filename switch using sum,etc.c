#include<stdio.h>
int main()
{
	int number1,number2;
	char choice;

	printf("enter your choice : ");
	scanf("%c",&choice);
	
	printf("enter the first number : ");
	scanf("%d",&number1);
	
	printf("enter the second number : ");
	scanf("%d",&number2);
	
	switch(choice)
	{  
	
	    case'+':printf("sum=%d",number1+number2);
		break;
		
		case'-':printf("subtraction=%d",number1-number2);
		break;
		
		case'*':printf("multiplication=%d",number1*number2);
		break;
		
		case'/':printf("division=%d",number1/number2);
		break;
		
		default:
    	printf("invalid choice...");
	}
	return 0;
}