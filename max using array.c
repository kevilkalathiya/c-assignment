#include<stdio.h>
int main()
{
	int arr[20]={63,75,65,83,12,45},max=arr[0],x;
	
	
	for(x=0;x<10;x++)
	{
		if(arr[x]>max)
		{
			max=arr[x];
		}
	}printf("max number is : %d",max);

   return 0;
}