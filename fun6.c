#include<stdio.h>
void rise(int);
void slow(int);
void stop1(int);
void stop(int);
void main()
{
    int o,s;
    printf("Enter the speed");
    scanf("%d",&s);
    printf("The car moves at the speed of %d per hour",s);
    while(1)
    {
        printf("\nEnter the obstacle\n1.Speed breaker\n2.person\n3.signal\n4.exit");
        scanf("%d",&o);
        switch(o)
        {
            case 1:slow(s);
                   break;
            case 2:stop(s);
                   rise(s);
                   break;
            case 3:stop1(s);
                   break;
            default:exit(0);
                   break;
        }
    }
    
}
void slow(int speed)
{
    speed=speed-30;
    printf("Now the speed is reduced to %d\n",speed);
    rise(speed+30);
    
}
void stop(int speed)
{
    while(speed>0)
    {   speed=speed-5;
        printf("\nspeed=%d",speed);
        
    }
    printf("\nThe car is stopped!!!!\n");
    printf("\nAfter few minutes...");
}
void rise(int speed)
{
    printf("Now the speed is increased to %d\n",speed);
}
void stop1(int speed)
{   int si;
    printf("The car is stopped");
    printf("\nEnter 1 to start move the car");
    scanf("%d",&si);
    if(si==1)
    printf("\nThe car moves");
}    
                    
                  
                   
        
    
