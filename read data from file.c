#include<stdio.h>
int main()
{
	FILE *file;
	char data[500];
	
	file=fopen("test.txt","r");
	
	fscanf(file,"%s",&data);
	printf("%s",data);
	
	fclose(file);
	
	return 0;
}