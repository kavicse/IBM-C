#include<stdio.h>
void main()
{
	int n,i,b[10],j,a;
	printf("\nEnter n:");
	scanf("%d",&n);
	printf("\nEnter number between 1 to 30");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&b[i]);
	
		for(j=0;j<b[i];j++)
		{
		
				printf("|");
		}
    }
	
}
