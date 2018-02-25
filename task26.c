#include<stdio.h>
void main()
{
	float old=4700,repair=800,sp=5800,cp,gain,gainp;
	cp=old+repair;
	gain=sp-cp;
	gainp=((gain/cp)*100);
	printf("\nGain Percentage=%f",gainp);
}
