#include<stdio.h>
void main()
{
    int a=2,*e;
    float c=2.5,*f;
    char b='a',*g;
    double d=23.97,*h;
    e=&a;
    f=&c;
    g=&b;
    h=&d;
    printf("\nThe value of int a=%d",a);
    printf("\nThe address of a=%p",a);
    printf("\nThe value of int b=%c",b);
    printf("\nThe address of b=%p",b);
    printf("\nThe value of int c=%f",c);
    printf("\nThe address of c=%p",c);
    printf("\nThe value of int d=%lf",d);
    printf("\nThe address of d=%p",d);
    printf("\nThe value of pointer e=%d",e);
    printf("\nThe address of pointer e=%p",e);
    printf("\nThe value of pointer f=%d",f);
    printf("\nThe address of pointer f=%p",f);
    printf("\nThe value of pointer g=%d",g);
    printf("\nThe address of pointer g=%p",g);
    printf("\nThe value of pointer h=%d",h);
    printf("\nThe address of pointer h=%p",h);
    
    
}
