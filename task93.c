#include<stdio.h>
void main()
{
 char name[20],grade[2],dept[30];
 int marks,r,i,n;	
 FILE *f;
 f=fopen("Student","a");
 if(f==NULL)
 {
 	printf("File doesn't exist!!!!");
 }
 else
 {
 printf("Enter number of students");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	printf("Enter name:");
 	scanf("%s",name);
 	fprintf(f,"%s",name);
 	printf("Enter rollno:");
	scanf("%d",&r);
	fprintf(f,"%d",r);
	printf("Enter department");
	scanf("%s",dept);
	fprintf(f,"%s",dept);	
	printf("Enter marks");
	scanf("%d",&marks);
	fprintf(f,"%d",marks);
	printf("Enter grade");
	 scanf("%s",grade);
	fprintf(f,"%c",grade);
	 
 }
}
}
