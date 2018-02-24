#include<stdio.h>
void main()
{
	FILE *p;
	char city[90];
	int climate;
	int length;
	printf("\nEnter city name:");
	scanf("%s",&city);
	printf("\nEnter climate:");
	scanf("%d",&climate);
	printf("\nEnter the length of city");
	scanf("%d",&length);
	p=fopen("data.txt","w");
	fprintf(p,"%s",city);
	fprintf(p,"%d",climate);
	fprintf(p,"%d",length);
	fclose(p);
}
