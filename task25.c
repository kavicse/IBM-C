#include<stdio.h>
void main()
{
	int a=3,b=3,c=4,d=5,e=7,f=2;
	printf("\n%d==%d=%d",a,b,(a==b));
    printf("\n%d==%d=%d",d,c,(d==c));
    printf("\n%d>%d=%d",d,f,(d>f));
	printf("\n%d<%d=%d",c,b,(c<b));
	printf("\n%d<=%d=%d",d,e,(d<=e));
	printf("\n%d!=%d=%d",d,d,(d!=d));
}
