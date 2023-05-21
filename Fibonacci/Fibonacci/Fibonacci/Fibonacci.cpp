#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>    
int main()
{
    int FirstE = 0, SecondE = 1, NextE , j, number;
    printf("The number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", FirstE, SecondE); 
    for (j = 2; j < number; ++j )   
    {
        NextE = FirstE + SecondE;
        printf(" %d", NextE);
        FirstE = SecondE;
        SecondE = NextE;
    }
    return 0;
}