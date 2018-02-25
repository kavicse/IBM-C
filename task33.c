#include<stdio.h>
void main()
{
	int person,bag,n,extra;
	printf("\nEnter the passanger travelling in flight");
	printf("\nEnter number 1 if one passanger travels");
		printf("\nEnter number 2 if more than one passanger travels");
		scanf("%d",&person);
	switch(person)
	{
		case 1:
			printf("\nEnter the weight of baggage");
			scanf("\t%d",&bag);
			if(bag>15)
			{
				extra=bag-15;
				printf("\nExtra baggage=%dkg",extra);
				printf("\nPay additional charge for %dkg is %d",extra,(extra*200));
				
			}
			else
			{
				printf("\n No extra charge ..Happy Journey");
		    }
			break;	
	    case 2:
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
			break;	
	    default:
	    	printf("\nValid number required");
	}
}
		    	
