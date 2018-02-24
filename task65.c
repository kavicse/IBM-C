#include<stdio.h>
void point(int*,int*);
void main()
{
    int a=12,b=6;
    printf("\n%d %d",a,b);
    point(&a,&b);
}
void point(int *a,int *b)
{
  *a=*a+*b;
   printf("\nThe sum is %d",*a);
}
© 2018 GitHub, Inc.
