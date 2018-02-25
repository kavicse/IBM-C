#include<stdio.h>
void main()
{
	int person,bag,n,extra;
	printf("\nEnter the passanger travelling in flight");
	printf("\nEnter the number of passenger");
	scanf("%d",&n);
	printf("\nEnter the weight of baggage");
	 scanf("\t%d",&bag);
		if((bag/n)>15)
			{
				extra=bag-(n*15);
              	printf("\nExtra baggage=%dkg",extra);
				printf("\nPay additional charge for %dkg is %d",extra,(extra*200));
				
			}
		else
			{
				printf("\n No extra charge ..Happy Journey");
		    }
			
	   
}
