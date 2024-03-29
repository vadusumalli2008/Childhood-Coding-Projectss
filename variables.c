#include <stdio.h>
#include <conio.h>

void main()
{
    int num = 10;
    int x = 12;
    float decimal = 1.2;
    char letter = 'A';
    double bignumber = 1223456.12;

    printf("This is a really fine character-%c\n", letter);
    printf("This is a really fine decimal-%f\n", decimal);
    printf("This is a really fine number-%d\n", num);
    printf("This is a really float number-%lf \n", bignumber);


    printf("%c is not %d likewise %f\n", letter, num, decimal);

    int sum = x + num;

    printf("two variables I put in the code equals to %d\n\n", sum);

    
    const int BIRTHYEAR=2007;
    printf("%d\n",BIRTHYEAR);
    

}