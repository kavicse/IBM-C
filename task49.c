#include<stdio.h>
void main()
{
	int ibat,abat,over,i,j,in,an,sum=0,sum1=0;
	float iavg,aavg;
	prinf("\nIndia won the toss and choose to bat");
	printf("\nIndian batsman");
	scanf("\t%d",&in);
	for(i=0;i<in;i++)
	{
		printf("%d batsman score",i);
		scanf("%d",&ibat);
		sum=sum+ibat;
	}
	printf("\nTotal score of India:\t%d",sum);
	printf("\n\nAustalia starts to  bat");
	printf("\nAustralia batsman");
	scanf("\t%d",&an);
	for(j=0;j<an;j++)
	{
		printf("%d batsman score",i);
		scanf("%d",&abat);
		sum1=sum1+abat;
	}
	printf("\nTotal score of Australia:\t%d",sum1);
	iavg=sum/over;
	printf("\n\nIndia Average runrate:%f",iavg);
	aavg=sum1/over;
	printf("\nAustralia Average runrate:%f",aavg);
	if(sum1>sum)
	{
		printf("\nAUSTRALIA WON THE MATCH");
	}
	else if(sum1==sum)
	{
		printf("\nMATCH TIE");
		
	}
	else
	{
		printf("\nINDIA WON THE MATCH");
	}
	
	
}
