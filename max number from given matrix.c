#include<stdio.h>
int main()
{
    
	int matrix[2][2];
    int max=matrix[0][0],row,col;
  
    printf("enter the number :\n");          
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            scanf("%d",&matrix[row][col]);
        }
    }

    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            if(max<matrix[row][col])
			{
                max=matrix[row][col];
            }
        }
    }
    printf("max from matrix is : %d",max);
    
    return 0;
}