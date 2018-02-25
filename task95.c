#include<stdio.h>
struct emp
{
	char name[10];
	int age;
	char des[20];
	
}e;
void main()
{
	FILE *f;
	char c;
	int i;
	f=fopen("Employee","r");
	do
	{
		c=fgetc(f);
		printf("%c",c);
		
	}while(c!=EOF);
	fclose(f);
	f=fopen("Employee","r+");
	printf("Enter name");
	scanf("%s",e.name);
	fprintf(f,"%s",e.name);
	printf("Enter age");
	scanf("%d",&e.age);
	fprintf(f,"%d",e.age);
	printf("Enter designation");
	scanf("%s",e.des);	
	fprintf(f,"%s",e.des);
	fclose(f);
}
