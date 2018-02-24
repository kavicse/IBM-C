#include<stdio.h>
void main()
{
	FILE *p;
	char c;
	p=fopen("data.txt","r");
	do
	{
	 c=fgetc(p);
	 printf("%c",c);
	 	
	}while(c!=EOF);
}
