#include<stdio.h>
void main()
{
	int a[20],n,i;
	printf("\nEnter the number of element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEven numbers in array");
	for(i=0;i<n;i++)
	{
	
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
		
	}
	printf("\nOdd numbers in array");
	for(i=0;i<n;i++)
	{
	
		if(a[i]%2!=0)
		{
			printf("\n%d",a[i]);
		}
		
	}
	       
	               
}
