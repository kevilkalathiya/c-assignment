#include<stdio.h>
int main()
{
	int row,col,x='a';
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c ",x++);
		}printf("\n");
	}
	
	return 0;
}