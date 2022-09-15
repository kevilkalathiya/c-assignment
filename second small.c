#include<stdio.h>
int main()
{
	int a[5]={56,95,42,3,75},x,min=a[0],secsmall=a[0];
     
     
    for(x=0;x<5;x++)
    {
    	if(min>a[x])
    	{
    		min=a[x];
		}
	}  printf("min : %d",min);
	                                           
	   
	for(x=0;x<5;x++)
{    
	if(secsmall>a[x]&&a[x]!=min)
	{ 
	secsmall=a[x];
	}

}
    printf("\nsecond small : %d",secsmall);
    
    return 0;
}