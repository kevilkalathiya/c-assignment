#include<stdio.h>
int main()
{
	int a[5]={34,63,75,94,88},x,max=a[0],seclar=a[0];
     
     
    for(x=0;x<5;x++)
    {
    	if(max<a[x])
    	{
    		max=a[x];
		}
	}  printf("max : %d",max);
	                                           
	   
	for(x=0;x<5;x++)
{    
	if(seclar<a[x]&&a[x]!=max)
	{ 
	seclar=a[x];
	}

}
    printf("\nsecond largest : %d",seclar);
    
    return 0;
}