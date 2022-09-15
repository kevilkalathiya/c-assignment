#include<stdio.h>
int main()
{
	int size,i;
	
	printf("Enter Array Size to Sort using Pointers = ");
	scanf("%d", &size);
	
	int arr[size];

	printf("Please Enter %d elements of an Array = \n", size);
	for (i=0; i<size;i++)
	{
		scanf("%d", &arr[i]);
    }  	
     sortarray(size,arr);
}
	
int sortarray(int size,int *a)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		
			if(*(a+i)>*(a+j))
			{
			temp=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=temp;
			}
		}
	}
	
	printf("\nSorted Array Elements using Pointer = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(a+i));
	}
}
