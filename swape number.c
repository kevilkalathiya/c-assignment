#include<stdio.h>
int main()
{
	int a=20,b=10;
	a=a+b;//20+10=30
	b=a-b;//30-10=20
	a=a-b;//30-20=10
	
	printf("a=%d\nb=%d",a,b);
	
	return 0;
}