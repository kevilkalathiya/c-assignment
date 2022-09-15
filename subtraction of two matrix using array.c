#include<stdio.h>
int main()
{
	int row,col,a1[2][2],a2[2][2],subtraction[2][2],xyz;
	
	printf("enter the first array elements : \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a1[row][col]);
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a1[row][col]);
		}printf("\n");
	}
	
	printf("enter the first array elements : \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a2[row][col]);
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a2[row][col]);
		}printf("\n");
	}
	
	for(row=0;row<2;row++)
	{
	    for(col=0;col<2;col++)
	    {   
		subtraction[row][col]=0;
	       	for(xyz=0;xyz<2;xyz++)
	    	{
			subtraction[row][col]=subtraction[row][col]+a1[row][xyz]-a2[xyz][col];
		    }
    	}printf("\n");
	}
	
		for(row=0;row<2;row++)
	{
			for(col=0;col<2;col++)
		{
		     printf("%d ",subtraction[row][col]);
		}printf("\n");
	}
	
	return 0;
}