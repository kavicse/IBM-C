#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"
void main()
{
	int a,b;
	printf("\nEnter the value of a:");
	scanf("\t%d",&a);
	printf("\nEnter the value of b:");
	scanf("\t%d",&b);
    printf("\nAddition is :\t%d",add(a,b));
     printf("\nSubstraction is :\t%d",sub(a,b));
      printf("\nMultiplication is :\t%d",mul(a,b));
       printf("\nDivision is :\t%d",div(a,b));
}
