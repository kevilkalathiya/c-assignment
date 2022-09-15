#include<stdio.h>
int main()
{
	int week;
	 
	 printf("enter the week days :");
	 scanf("%d",&week);
	 
	 switch(week)
	 {
	 	case 1: printf("monday");
	 	break;
	 	
	    case 2: printf("tuesday");
	 	break;
	 		
	 	case 3: printf("wednesday");
	 	break;
	 		
	 	case 4: printf("thuresday");
	 	break;
	 		
	 	case 5: printf("friday");
	 	break;
	 	
	 	case 6: printf("saturday");
	 	break;
	 	
	 	case 7: printf("sunday");
	 	break;
	 	
	 	default : printf("invalid choice...please enter 1 to 7 days");
	 	
	 }
	 
	 return 0;
}