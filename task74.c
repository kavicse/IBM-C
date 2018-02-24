#include<stdio.h>
struct stud
{
	int m1;
	int m2;
	int m3;
	char name[50];
	int total;
	float avg;
	
}e[10];
void main()
{
	
	int i,n;
	printf("\nEnter the number of details :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
	    scanf("%s",&e[i].name);
		printf("\nEnter Mark1:");
	    scanf("%d",&e[i].m1);
	    printf("\nEnter Mark2:");
	    scanf("%d",&e[i].m2);
	    printf("\nEnter Mark3:");
	    scanf("%d",&e[i].m3);
	    e[i].total=e[i].m1+e[i].m2+e[i].m3;
	    printf("\nTotal:%d",e[i].total);
	    e[i].avg=(e[i].total)/3;
	    printf("\nAverage:%f",e[i].avg);
	}
	printf("\n Name \t\tMark1\t Mark2\t Mark2\t Total\t Average\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf(" %s \t\t %d \t %d \t %d \t %d \t %.2f \n",
        e[i].name,e[i].m1,e[i].m2,e[i].m3,e[i].total,e[i].avg);
    }


}
