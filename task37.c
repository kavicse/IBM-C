#include<stdio.h>
void main()
{
	int t1,t2,t3;
	printf("\nEnter salary of 1st friend");
	scanf("%d",&t1);
	printf("\nEnter salary of 2nd friend");
	scanf("%d",&t2);
	printf("\nEnter salary of 3rd friend");
	scanf("%d",&t3);
	if((t1>t2)&&(t1>t3))
	{
		printf("\n1st friend has HIGHEST salary");
	}
    else if((t2>t1)&&(t2>t3))
    {
	printf("\n2nd friend has HIGHEST salary");
	}
    else
	{
		printf("\n3rd friend has HIGHEST salary");
	}	
		
}
