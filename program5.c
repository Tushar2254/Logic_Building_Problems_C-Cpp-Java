// Write a program to perform addition of 2 numbers

#include<stdio.h>

int Addition(int iValue1 , int iValue2)         //dukan
{
    int iAns = 0;
    iAns = iValue1 + iValue2;

    return iAns;
}

int main()                      //ghar
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    printf("Enter First number :");
    scanf("%d",&iNo1);

    printf("Enter Second number :");
    scanf("%d",&iNo2);

    iNo3 = Addition(iNo1 , iNo2);

    printf("Addition is :%d\n",iNo3);
    

    return 0;
}