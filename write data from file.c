#include<stdio.h>
int main()
{
	FILE *file;
	char data[500];
	
	file=fopen("demo.txt","w");
	
	gets(data);
	fprintf(file,"%s",data);
	
	fclose(file);
	
	return 0;	
}