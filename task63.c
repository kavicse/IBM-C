#include<stdio.h>
void point(int*,int*);
void main()
{
    int a=12,b=6;
    point(&a,&b);
    printf("\n%d %d",a,b);
}
void point(int *a,int *b)
{
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;
  printf("%d %d",*a,*b);
}
