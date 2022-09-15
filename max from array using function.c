#include<stdio.h>

int maxnumber()
{
	int a[100];
    int i,size;
    
    
    printf("enter the number of elements : ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {  printf("enter the number %d : ",i+1);
       scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<size;i++)
	{
	  if(max<a[i])
	  {
		max=a[i];
	  }	
	}printf("max number is : %d",max);
    
}

int main()
{
    maxnumber();
    return 0;
}
