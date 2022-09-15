#include<stdio.h>

int main()
{
  int number,palindrome;
  
  printf("enter the number : ");
  scanf("%d",&number);
  
  palindrome=revers(number);
  
  if(palindrome==1)
   {
   	printf("%d is palindrome number...",number);
   }
   else
   {
   	printf("%d is not a palindrome number...",number);
   }	
   
return 0;
 }

int revers(int number)
{   
	int reminder,n=number;
    static int revers_num=0;
    
	if(n!=0)
	{	
	reminder=n%10;
    revers_num=revers_num*10+reminder;
    revers(n/10);
    }	
        
	if(revers_num==number)
	{
	return 1;
	}
	else
	{   
	return 0;
    }

}

