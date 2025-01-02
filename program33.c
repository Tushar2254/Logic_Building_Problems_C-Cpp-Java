#include<stdio.h>
#include<stdbool.h>

int DisplayFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt==0)
        {
           // printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
bool CheckPerfect(iNo)
{
    int iAns = 0;

    iAns = DisplayFactor(iNo);
    if(iAns == iNo)
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
    int iRet = 0;
    bool bRet;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet=DisplayFactor(iValue);

    printf("Summation is:%d\n",iRet);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d-Number is perfect",iValue);
    }
    else
    {
        printf("%d-Number is not perfect",iValue);
    }

    return 0;
}