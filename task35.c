#include<stdio.h>
void main()
{
	int n;
	printf("\nSelect the college");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nV.S.B Engineering College");
			printf("\n Karur");
			printf("\n Department Available");
			printf("\nCSE");
			printf("\nECE");
			printf("\nEEE");
			printf("\nCIVIL");
			printf("\nMECHANICAL");
	        break;
        case 2:
        	printf("\nPSG Engineering College");
			printf("\n Covai");
			printf("\n Department Available");
			printf("\nCSE");
			printf("\nECE");
			printf("\nCIVIL");
			printf("\nMECHANICAL");
			break;
		case 3:
		    printf("\nV.S.B Technical Campus");
			printf("\n Covai");
			printf("\n Department Available");
			printf("\nCSE");
			printf("\nECE");
			printf("\nEEE");
	        printf("\nMECHANICAL");	
	        break;
	    case 4:    
	    	printf("\nK.S.R Engineering College");
			printf("\n Namakal");
			printf("\n Department Available");
			printf("\nCSE");
			printf("\nECE");
			printf("\nEEE");
			printf("\nCIVIL");
			printf("\nMECHANICAL");
			printf("\nIT");
			break;
		case 5:
		    printf("\nS.R.M University");
			printf("\n Karur");
			printf("\n Department Available");
			printf("\nCSE");
			printf("\nECE");
			printf("\nEEE");
			printf("\nCIVIL");
			printf("\nMECHANICAL");	
			printf("\nAUTOMOBILE");
			break;
		default:
			printf("\nAnna University");
			break;
			
								
	}
}
