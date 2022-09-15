#include<stdio.h>

int fibonacci()
{
	int number,i,a=0,b=1,c;
	
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(i=0;i<=number;i++)// 0 1 2 3 4 5
	{   
	    printf("%d ",a);// 0 1 1 2 3 5
		c=a+b;//0+1=1  //1+1=2 //1+2=3 //2+3=5 //3+5=8
		a=b;//1 //1 //2 //3 //5
		b=c;//1 //2 //3 //5 //8
	}
	
}

int main()
{
	fibonacci();
	return 0;
}