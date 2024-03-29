#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
char merge[]="Hey";
char merge1[]="pal";
int regularnumber=3;
int* pointer= &regularnumber;
strcat(merge,merge1);


printf("%p\n",&pointer);
printf("%c\n",merge);



getch();

   
}