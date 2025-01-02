#include<stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

int DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);

        iNo = iNo / 10;
        iCnt = iCnt + 1;        //iCnt++;
        
    }
    return iCnt;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);

    printf("Total number is digits are: %d",iRet);


}