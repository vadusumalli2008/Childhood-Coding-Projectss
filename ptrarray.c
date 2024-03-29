//create an array w/ pointers
#include <stdio.h>
#include <conio.h>
void main()
{
int i;
int p;
int pntarray[13];
printf("Value to Adress Converter\n");
printf("Enter your values\n");
scanf("%d",&pntarray[13]);
for(i=0;i<13;i++)
{
printf("%p\n",&pntarray[i]);
}
getch();
}