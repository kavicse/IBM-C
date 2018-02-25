#include<stdio.h> 
void withvar(int a,int b);
void wovar(int c,int d);
void single(int e,int f);
void main()
{
	int a=10;
	int b=25,temp;
	withvar(a,b);
	wovar(a,b);
	single(a,b);
	}
	void withvar(int a,int b)
	{
	int temp;
	printf("With using third variable");
    temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swapping");
	printf("\t%d\t%d",a,b);
	}
	void wovar(int a,int b)
	{
	printf("\nWithout using third variable");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\t%d\t%d",a,b);
    }
    void single(int a,int b)
    {
	printf("\nIn single line");
    (a^=b),(b^=a),(a^=b);
	printf("\t%d\t%d",a,b);
    }

