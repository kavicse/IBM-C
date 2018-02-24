#include<stdio.h>
int fun(char a[20]);
void add();
void sub();
void mul();
void divi();
int add1(int);
int sub1(int);
int mul1(int);
int divi1(int);
void main()
{
    char a[20];
    int b,c,d,e;
    printf("Enter the number of arguments 1 or 2");
    scanf("%d",&c);
    if(c==2)
    {
    printf("Enter the operation");
    scanf("%s",a);
    b=fun(a);
    switch(b)
    {
     case 1:add();
            break;
     case 2:sub();
            break;
     case 3:mul();
            break;
     case 4:divi();
            break;
     default:printf("Enter valid operation");
            break;
            
    }
}
    else
    {
    printf("Enter the operation");
    scanf("%s",a);
    b=fun(a);
    switch(b)
    {
     case 1:printf("Enter the value");
            scanf("%d",&d);
            e=add1(d);
            printf("The value is %d",e);
            break;
     case 2:printf("Enter the value");
            scanf("%d",&d);
            e=sub1(d);
            printf("The value is %d",e);
            break;
     case 3:printf("Enter the value");
            scanf("%d",&d);
            e=mul1(d);
            printf("The value is %d",e);
            break;
     case 4:printf("Enter the value");
            scanf("%d",&d);
            e=divi1(d);
            printf("The value is %d",e);
            break;
     default:printf("Enter valid operation");
            break;
            
    }
}
    
    
}
int fun(char a[20])
{
    if(a=="Addition")
    {
     return 1;
    }
    else if(a=="Subtraction")
    {
     return 2;
    }
    else if(a=="Multiplication")
    {
     return 3;
    }
    else if(a=="Division");
    {
     return 4;
    }
   
}
 void add()
     {
         int a,b,c;
         printf("Enter the value of a and b");
         scanf("%d %d",&a,&b);
         printf("The value is %d",(a+b));
         
     } 
     void sub()
     {
         int a,b;
         printf("Enter the value of a and b");
         scanf("%d %d",&a,&b);
         printf("The value is %d",(a-b));
     }
     void mul()
     {
         int a,b;
         printf("Enter the value of a and b");
         scanf("%d %d",&a,&b);
         printf("The value is %d",(a*b));
     }
     void divi()
     {   
         int a,b;
         printf("Enter the value of a and b");
         scanf("%d %d",&a,&b);
         printf("The value is %d",(a/b));
     }
     int add1(int a)
     {
         return (a+3);
     }
     int sub1(int a)
     {
         return (a-3);
     }

     int mul1(int a)
     {
         return (a*3);
     }

     int divi1(int a)
     {
         return (a/3);
     }


     
