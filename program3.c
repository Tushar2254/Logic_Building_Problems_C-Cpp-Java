// Write a program to perform addition of 2 numbers

#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter first number:");
    scanf("%d",&i);

    printf("Enter Second number:");
    scanf("%d",&j);

    k = i + j;
    printf("Addition is: %d\n",k);

    return 0;
}