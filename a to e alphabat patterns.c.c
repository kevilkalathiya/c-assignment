#include<stdio.h>
int main()
{
	int row,col;
	
	for(row='a';row<='e';row++)
	{
		for(col='a';col<=row;col++)
		{
			printf("%c ",col);
		}printf("\n");
	}
	
	return 0;
}