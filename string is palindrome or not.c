#include<stdio.h>
#include<string.h>
int main()
{
     char s1[100],s2[100];
	 
	 puts("enter the string : ");
	 gets(s1);
	 strcpy(s2,s1);
	 strrev(s2);
	       	
	 if(strcmp(s1,s2)==0)
	{
	    printf("string is palindrome number...");
	} 	   
	else
	{
		printf("string is not palindrome number...");
	}
	return 0;		        	
}