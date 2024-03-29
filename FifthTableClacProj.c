#include <stdio.h>
#include <conio.h>

void main()

{
int f;
int i=5;

for(f=1; f<=10; f++)
    {
        printf("%d * %d = %d\n", i, f, (f*i));
        if(i==2)
        {
            continue;
        }
    }




//getch();

}