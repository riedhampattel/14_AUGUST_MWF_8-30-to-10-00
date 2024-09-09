#include<stdio.h>
int main()
{
    int i;

    printf("\nFor loop := ");
    for(i=0;i<5;i++)
    {
        printf("\nTOPS Technologies");
    }

    printf("\nWhile loop := ");
    i=1;
    while(i<=5)
    {
        printf("\nTOPS Technologies");
        i++;
    }

    printf("\ndo while loop :=");
    i=1;
    do
    {
        printf("\nTOPS Technologies");
        i++;
    }while(i<6);

    return 0;
}