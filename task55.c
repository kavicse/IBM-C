#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i,j,l;
	printf("\nEnter name:");
	scanf("%s",&name);
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%c",name[j]);
		}
		printf("\n");
	}
	return 0;
}
