#include<stdio.h>
int point(int*,int*);
void main()
{
    int a=12,b=6;
    printf("\n%d %d",a,b);
    point(&a,&b);
    printf("\nAfter swapping\n");
    printf("%d %d",a,b);
}
int point(int *a,int *b)
{
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;
  return 0;
}
