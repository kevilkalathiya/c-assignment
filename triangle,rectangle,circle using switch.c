#include<stdio.h>
int main()
{
	int choice;
	float radius,area,width,length,base,height,pi=3.14;
	
	printf("enter 1 for area of circle : \n");
	printf("enter 2 for area of rectangle : \n");
	printf("enter 3 for area of triangle : \n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("enter the radius:");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("area of circle=%.2f",area);
	break;
	
	case 2:
	printf("enter the width:");
	scanf("%f",&width);
	
	printf("enter the length:");
	scanf("%f",&length);
	
	area=width*length;
	printf("area of rectangle=%.2f",area);
	break;
	
	case 3:	
	printf("enter the base:");
	scanf("%f",&base);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	area=base*height/2;
	printf("area of triangle=%.2f",area);
	break;	 
	
	default:printf("enter the correct choice..");          
    }
    
    return 0;
} 