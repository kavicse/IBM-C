#include<stdio.h>
void point(int*);
void main()
{
    const int a=20;
    printf("Constatnt Variable int a=%d;",a);
    point(&a);
    printf("\nThe value of a is %d",a);

}
void point(int *p)
{
    *p=10;
}
