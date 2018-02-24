#include<stdio.h>
void main()
{
    int a[3],i,j,r,b,c,d;
    printf("Enter 3 values");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
        }
    }
   
    
    b=a[0]-a[1];
    c=a[1]-a[2];
    if(b>c)
    printf("%d %d is success",a[1],a[2]);
    else
    printf("%d %d is success",a[0],a[1]);
}
        
    
