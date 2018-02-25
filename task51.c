#include<stdio.h>
void main()
{
	int rollno[10],eng[10],phy[10],che[10],eg[10],cp[10],total[10];
	float avg;
	int i,n,j,big;
	printf("\nClass Strength");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Roll no:");
		scanf("%d",&rollno[i]);
			printf("\nEnter English mark:");
		scanf("%d",&eng[i]);
			printf("\nEnter Physics mark:");
		scanf("%d",&phy[i]);
			printf("\nEnter Chemistry mark:");
		scanf("%d",&che[i]);
			printf("\nEnter Engineering Graphics mark:");
		scanf("%d",&eg[i]);
			printf("\nEnter Computer programming mark:");
		scanf("%d",&cp[i]); 
	}
		for(j=0;j<n;j++)
		{
		int sum=0;
		total[j]=sum+eng[j]+phy[j]+che[j]+eg[j]+cp[j];
			printf("\nTotal :%d",total[j]);
		}
		big=total[0];
		for(i=1;i<n;i++)
		{
			if(total[0]<total[i])
			{
				total[0]=total[i];
			}
			
		}	
		printf("\n University Topper with %d marks",total[0]);
}
			
