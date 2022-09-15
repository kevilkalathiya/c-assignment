#include<stdio.h>
int main()
{
	int arr[100],x,number,even,odd,count=0;
	
	printf("enter the range number : ");
	scanf("%d",&number);
	printf("enter the number : \n");
	
	for(x=1;x<=number;x++)
	{
		scanf("%d",&arr[x]);
	}
	
		for(x=1;x<=number;x++)
	{
		printf("\n%d",arr[x]);
		
		if(arr[x]%2==0)
		{
		   count++;
		}
		
	} 
	
	printf("\neven number : %d\n",count);
	printf("odd number : %d",number-count);
	
	return 0;
}