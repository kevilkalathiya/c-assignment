int main()
{
	int number,x,a=0,b=1,c;
	printf("enter any number : ");
	scanf("%d",&number);//5
	
    for(x=0;x<=number;x++)//0 1 2 3 4 5
    {    
	    printf("%d ",a);// 0 1 1 2 3 5
	    c=a+b;//1 2 3 5 8 
	    a=b;//1 1 2 3 5 
	    b=c;//1 2 3 5 8 
    } 		
  return 0;
}			