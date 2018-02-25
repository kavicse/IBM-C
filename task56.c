#include<stdio.h>
void main()
{
	int n=26,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%c",('A'+(j-1)));
		}
		printf("\n");
	}
}
