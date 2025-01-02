#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("Number is prime:%d",iValue);
    }
    else
    {
        printf("Number is not prime:%d",iValue);
    }
    return 0;
}