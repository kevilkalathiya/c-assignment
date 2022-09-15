#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	
	printf("sum is=%d",*p+*q);
	
	return 0;
}