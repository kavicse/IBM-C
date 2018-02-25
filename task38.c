#include<stdio.h>
void main()
{
	int a=4,b=4,c;
	if(a==b)
	{
		printf("\nIf part");
		goto c;
	}
	else
	{
		c:printf("\nElse part");
	}
}
