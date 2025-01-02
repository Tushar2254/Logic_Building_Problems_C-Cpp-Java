#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
    int iDigCnt = 0 , iCnt = 0;
    int iTemp = 0 , iDigit = 0;
    int iSum = 0 , iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigCnt = iDigCnt + 1;
        iNo = iNo / 10;
    }
    iNo = iTemp;
    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;
        
        for(iCnt=1; iCnt <= iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;
        iNo = iNo / 10;
    }
    if(iSum == iTemp)
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

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = ChkArmstrong(iValue);

    if(bRet == true)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is NOT Armstrong");
    }

    return 0;

}