#include<stdio.h>
int main()
{
	int a,num,d=0,r=0;
	printf("\nEnter the number");
	scanf("%d",&a);
	num=a;
	while(num>0)
	{
	 r=num%10;
	 d=r+d*10;
	 num=num/10;	
	} 
	printf("\nThe reverse number is %d",d);
	return 0;
}
