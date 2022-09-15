#include<stdio.h>
int main()
{
	char k[100],j[100];
	int length,i;
	printf("enter the string : ");
	gets(k);
	printf("string k :%s\n",k);
	length=strlen(k);
	
	for(i=0;i<length;i++)
	{
		j[i]=k[i];
	}

	j[i] = '\0';// K0 :E1 :V2 :I3 :L4 //exit loop=printf("null=%s\n",j[i])= j[5] //j[5]='\0' 
    printf("string j :%s",j);
    
    return 0;
}