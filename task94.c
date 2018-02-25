#include<stdio.h>
void main()
{
FILE *f;
char s[30]="I Love C Language",c;
f=fopen("C","w");
fprintf(f,"%s",s);
fclose(f);
f=fopen("C","r");
do
{
c=fgetc(f);
printf("%c",c);
}while(c!=EOF);
rewind(f);
do
{
c=fgetc(f);
printf("%c",c);
}while(c!=EOF);
}
