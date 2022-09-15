#include<stdio.h>
int main()
{
	char str[]="jenish";// gets(str)
	int i,length=0;
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
    }
    
	printf("length is : %d",length);
	return 0;
}