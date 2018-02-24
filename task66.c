#include <stdio.h>
void point(int**,int**);
void main()
{
  int a=5,b=4,*p,*q;
  p=&a;
  q=&b;
  point(&p,&q);
}
void point(int **p,int**q)
{
    printf("sum is %d",**p+**q);
}
