#include<stdio.h>
struct emp
{

	char emp_name[50];
    char emp_native[50];
    
	
};
struct employee
{
	int emp_id;
	int emp_sal;
	struct emp d;
	
}e[10];
void main()
{
	
	int i,n;
	printf("\nEnter the number of employees :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
	    scanf("%s",&e[i].d.emp_name);
		printf("\nEnter Emp_id:");
	    scanf("%d",&e[i].emp_id);
	    printf("\nEnter Native:");
	    scanf("%s",&e[i].d.emp_native);
	    printf("\nEnter Salary:");
	    scanf("%d",&e[i].emp_sal);
	    
	}
	printf("\n Name \tEmployee_Id\t Employee_native\t Employee_salary\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf(" %s \t\t %d \t %s \t %d \t  \n\n",
        e[i].d.emp_name,e[i].emp_id,e[i].d.emp_native,e[i].emp_sal);
    }


}
