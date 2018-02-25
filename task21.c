#include<stdio.h>
int b=10;
int d=20;
int main()
{
	int a=5;
	int c=10;
	extern int b;
	extern int d;
	printf("Global variable:%d",b);
	printf("\nLocal variable:%d",a);
	printf("\nLocal variable:%d",c);
	printf("\nGlobal variable:%d",d);
	return 0;
	
}
