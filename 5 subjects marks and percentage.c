#include<stdio.h>
int main()
{
	int maths,bio,che,phy,guj,sum,i;
	float percentage;
	
	printf("enter the maths mark :");
	scanf("%d",&maths);
	printf("enter the biology mark :");
	scanf("%d",&bio);
	printf("enter the chemistry mark :");
	scanf("%d",&che);
	printf("enter the physics mark :");
	scanf("%d",&phy);
	printf("enter the gujarati mark :");
	scanf("%d",&guj);
	
	printf("sum=%d\n",sum=maths+bio+che+phy+guj);
	for(i=0;i<1;i++)
    {
	
	if(sum>=500)
	{   printf("enter the wrong mark...");
		break;
	}
	
	else
    { 
	printf("percentage=%.2f\n",percentage=sum/5);	
    printf("class is : ");
    
    if(percentage>75&&percentage<=100)
    {
    	printf("distinction");
	}
	else if(percentage>60&&percentage<=75)
	{
		printf("first class");
	}
	else if(percentage>50&&percentage<=60)
	{
		printf("second class");
	}
	else if(percentage>35&&percentage<=50)
	{
	 	printf("pass class");
	}
	else
	{
		printf("fail");
	}
    }
    }   
   return 0;
}