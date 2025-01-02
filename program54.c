#include<stdio.h>
#include<stdbool.h>

bool Pallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iTemp = iNo;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 +iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = Pallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Pallindrome:%d",iValue);
    }
    else
    {
        printf("Number is not Pallindrome:%d",iValue);

    }
    return 0;
}