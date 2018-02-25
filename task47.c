#include<stdio.h>
int main()
{
	int rows,i,j,a=1;
	printf("\nEnter the rows");
	scanf("%d",&rows);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d",a++);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
