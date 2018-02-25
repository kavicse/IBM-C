#include<stdio.h>
int main()
{
	int inst,amount,pay,i,r=2000,sum=0,bal=0;
	printf("\nEnter the loan amount");
	scanf("%d",&amount);
	printf("\nEnter the number of installement");
	scanf("%d",&inst);
	for(i=1;i<=inst;i++)
	{
		printf("\n%d installement amount:",i);
		scanf("%d",&pay);
		sum=pay+sum;
		if(pay<r)
		{
			bal=r-pay;
			printf("\nBalance is : %d",bal);
		}
	
	}
		printf("\nTotal installement :%d",sum);
		return 0;
}
