#include<stdio.h>
int main()
{
    int number;
    
    printf("enter the number:");
    scanf("%d",&number);
    
    (number%2==0)? printf("even number"):printf("odd number");
    
    return 0;
}