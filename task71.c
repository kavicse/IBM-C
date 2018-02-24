#include<stdio.h>
#include<string.h>
struct lap
{
	int ram;
	char processor[56];
	int harddisk;
	char brand[20];
	int price;
	
}e;
void main()
{
	strcpy(e.processor,"i5");
	printf("\nEnter the laptop brand:");
	scanf("%s",&e.brand);
	printf("\nEnter RAM size:");
	scanf("%d",&e.ram);
	printf("\nEnter hard disk size:");
	scanf("%d",&e.harddisk);
	printf("\nEnter processor : %s",e.processor);
	printf("\n\nEnter cost:");
	scanf("%d",&e.price);
	printf("\nLaptop brand: %s",e.brand);
	printf("\n RAM size: %d",e.ram);
	printf("\nHard disk size:%d",e.harddisk);
	printf("\nProcessor :%s",e.processor);
	printf("\nCost:%d",e.price);
			
		
}
