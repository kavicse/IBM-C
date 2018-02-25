#include<stdio.h>
void main()
{
	int age;
	printf("\nEnter Age:");
	scanf("\t%d",&age);
	if(age<=18)
	{
		printf("\nNot Eligible to Vote");
	}
	else
	{
		printf("\nEligible to Vote");
	}
}
