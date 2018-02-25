#include<stdio.h> 
#include<string.h>
void main()
{
	char paswrd[30];
	printf("\nEnter the password");
	scanf("%s",&paswrd);
	int a,count=0,count1=0,i;
	a=strlen(paswrd);
	printf("\n%d",a);
	for(i=0;i<a;i++)
	{
		if( paswrd[i]=='a'||paswrd[i]=='e'||paswrd[i]=='i'||paswrd[i]=='o'||paswrd[i]=='u')
		count++;
	    else
	    count1++;
	}
	printf("\nVowels present is %d",count);
	printf("\nConstant present is %d",count1);

}
