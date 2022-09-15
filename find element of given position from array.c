#include<stdio.h>
int main()
{
	int arr[100],i,size,search;
	printf("enter the elements size : ");
	scanf("%d",&size);
	
	printf("enter %d array elements:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	printf("\nenter elements to search:");
	scanf("%d",&search);
	x:
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			printf("%d found at position : %d",search,i);
	        return 0;
		}
	}	
	printf("%d is not found",search);
	return 0;
}