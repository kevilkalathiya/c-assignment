#include<stdio.h>
int main()
{
  int number,reminder,revers=0;
  printf("enter any number : ");
  scanf("%d",&number);//456
  
  while(number!=0)
  {
  	reminder=number%10;//456%10=6, 45%10=5  ,4%10=4
  	revers=revers*10+reminder;//0*10+6=6, 6*10+5=65,65*10+4=654
  	number=number/10;//45,4,0.1
  	
  }
    printf("revers number is : %d",revers);
    return 0;
}