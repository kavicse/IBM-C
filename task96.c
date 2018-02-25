#include<stdio.h>
struct favo
{
	int no;
	char clr[10],dish[10],name[10];
}f[3];
void main()
{
	FILE *p;
	int i,ch;
	p=fopen("Favourites","w");
	for(i=0;i<3;i++)
	{   
	    printf("Enter  name");
		scanf("%s",f[i].name);
		fprintf(p,"%s",f[i].name);
		printf("Enter fav number");
		scanf("%d",&f[i].no);
		fprintf(p,"%d",f[i].no);
		printf("Enter fav colour");
		scanf("%s",f[i].clr);
		fprintf(p,"%s",f[i].clr);
		printf("Enter fav dish");
		scanf("%s",f[i].dish);
		fprintf(p,"%s",f[i].dish);
	}
	
	fclose(p);
	p=fopen("Favourites","r");
	printf("Enter the choice\n1.Abc\n2.Edf\n3.Ghi");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nName=%s",f[ch-1].name);
		       printf("\nFavourite number=%d",f[ch-1].no);
		       printf("\nFavourite colour=%s",f[ch-1].clr);
		       printf("\nFavourite dish=%s",f[ch-1].dish);
		       break;
		case 2:printf("\nName=%s",f[ch-1].name);
		       printf("\nFavourite number=%d",f[ch-1].no);
		       printf("\nFavourite colour=%s",f[ch-1].clr);
		       printf("\nFavourite dish=%s",f[ch-1].dish);
		       break;
		case 3:printf("\nName=%s",f[ch-1].name);
		       printf("\nFavourite number=%d",f[ch-1].no);
		       printf("\nFavourite colour=%s",f[ch-1].clr);
		       printf("\nFavourite dish=%s",f[ch-1].dish);
		       break;
	    default:printf("Give valid value");
	    break;
		       	
		       
	}fclose(p);
	
}
