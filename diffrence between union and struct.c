#include<stdio.h>

struct abc  // 4+20=24
{
	int id;//4
	char name[20];//20
};

union xyz // 20
{
	int id;//4
	char name[20];//20
};

int main()
{
	struct abc j;
	
	printf("enter name and id : \n");
	scanf("%s %d",&j.name,&j.id);
	printf("name=%s \nid=%d",j.name,j.id);
	printf("\nsize of struct= %d",sizeof(j));
	
	union xyz k;
	
	printf("\n\nenter name and id : \n");
	scanf("%s %d",&k.name,&k.id);
	printf("name=%s \nid=%d",k.name,k.id);
	printf("\nsize of union= %d",sizeof(k));
	
	return 0;
	
}
