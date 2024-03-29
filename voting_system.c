#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char name[50];  
char pres[50];  
printf("Enter your name\n");
scanf("%s",name);
printf("Hello %s\n",name);


printf("WHO IS YOUR MOST FAVORITE CHARACTER OUT OF THESE TWO\n");
printf("Patrick or Spongebob\n");
scanf("%s",pres);
if(strcmp(pres,"Patrick")==0)
{
printf("You have voted for Patrick");

}
else if(strcmp(pres,"Spongebob")==0)
{
printf("You have voted for Spongebob");

}
else{
printf("Please choose Patrick or Spongebob");
}

getch();
}