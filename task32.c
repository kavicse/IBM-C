#include<stdio.h>
void main()
{
	int birthyr,currentyr,age;
	printf("\nBirth year:");
	scanf("\t%d",&birthyr);
	printf("\nCurrent year:");
	scanf("\t%d",&currentyr);
	age=currentyr-birthyr;
	printf("\nAge:\t%d",age);
	if(age>=18)
	{
		printf("\nYou are eligible for drivimg license");
	}
	else
	{
	printf("\nYou not are eligible for drivimg license");
	}	
	
}
