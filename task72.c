#include<stdio.h>
#include<string.h>
struct lap
{
	int acc_no;
	char name[56];
	int bal;
}e[10];
void main()
{
	int i,n;
	printf("\nEnter the number of details :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Account number:");
	    scanf("%s",&e[i].acc_no);
	    printf("\nEnter name:");
	    scanf("%s",&e[i].name);
	    printf("\nEnter balance:");
	    scanf("%d",&e[i].bal);
	}

for(i=0;i<n;i++)
{
	printf("\n\nAccount number: %d",e[i].acc_no);
	printf("\nName :%s",e[i].name);
	printf("\nBalance:%d",e[i].bal);
}	
}
