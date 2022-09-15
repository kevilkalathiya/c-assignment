#include<stdio.h>
int main()
{
	int row,col,x=0,y=1;
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			
			if(col%2==0)
			{
			 printf("%d ",x);
			}
			
			else
			{
			 printf("%d ",y);
			}
				
		} printf("\n");
	}	
	return 0;
}