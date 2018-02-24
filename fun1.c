#include <stdio.h>
int square(int);
void rect(int,int);
float triangle();
void circle();
void main()
{
    int a,b,l,br;
    float c;
    printf("Enter the side of the square");
    scanf("%d",&a);
    b=square(a);
    printf("\nThe area of square is %d",b);
    printf("\nEnter length and breadth of rectangle");
    scanf("%d %d",&l,&br);
    rect(l,br);
    c=triangle();
    printf("\nThe area of the triangle is %.2f",c);
    circle();
}
int square(int a)
{
    return (a*a);
}
void rect(int a,int b)
{
    printf("\nThe area of rectangle %d",a*b);
}
float triangle()
{
    int a,b;
    printf("\nEnter the base and height of the triangle");
    scanf("%d %d",&a,&b);
    return ((0.5)*a*b);
}
void circle()
{
    int r;
    printf("\nEnter the radius of the circle");
    scanf("%d",&r);
    printf("\nThe area of the circle is %.2f",(3.14*r*r));
}

    
    
    
