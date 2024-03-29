#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void main()
{
int x;
int y;
printf("enter your last years grade percentage\n");
scanf("%d",&x);
if (x==100)
{
printf("GRADE: A\n");
}
else if(x<=99 && x>=90)
{
printf("GRADE: -A\n");
}
else if(x<=89 && x>=80)
{
printf("GRADE: B\n");
}
else if(x<=79 && x>=70)
{
printf("Grade: C\n");
}
else if(x<=69 && x>=60)
{
printf("GRADE: D\n");
}
else if(x<=59 && x>=0)
{
printf("I am sorry, your grade is an F, try harder, you can do it!\n");
}
else
{
printf("put in your grade percentage as a number\n");
}

bool DoIneedtogetbettergrades=true;
printf("%d",DoIneedtogetbettergrades);

getch();
}