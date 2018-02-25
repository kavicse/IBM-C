#include<stdio.h>
void main()
{
char a[50];
char des[50];
int age,sal,exp;
printf("\n Enter your name");
scanf("%s",&a);
printf("\n Enter your age");
scanf("%d",&age);
printf("\n Enter your designation");
scanf("%s",&des);
printf("\n Enter your experience");
scanf("%d",&exp);
printf("\n Enter your salary");
scanf("%d",&sal);
printf("\nMy name is %s",a);
printf("\nI am %dyears old",age);
printf("\n My designaton is %s",des);
printf("\nMy experience is %d with %d salary",exp,sal);
}

