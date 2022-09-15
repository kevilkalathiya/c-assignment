#include<stdio.h>
int main()
{
	
	char str1[100],str2[100],*a,*b;
	
	printf("enter the first string : ");
	gets(str1);//kevil
	printf("enter the second string : ");
	gets(str2);//kalathiya
	
	a=str1;//kevil
	b=str2;//kalathiya

    while(*a!='\0')
    {
    	a++;
	}
	
	while(*b!='\0')
	{
		*a=*b;
	    b++;
		a++;
	}

    *a='\0';
	printf("After the concatenation : %s",str1);
	
	return 0;
}


//for(a=str1;*a!='\0';a++)
//{
//	
//}
//
//for(b=str2;*b!='\0';b++)
//{
//	*a=*b;
//	a++;
//}