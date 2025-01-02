#include<stdio.h>
#include<stdlib.h>

int SearchLastOccurance(int Arr[] , int iLength , int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(iNo == Arr[iCnt])
        {
            break;
        }
        
    }
    return iCnt;

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter element of Array :");
    scanf("%d",&iSize);

    ptr =(int*)malloc(iSize * sizeof(int));

    printf("Enter values in Array:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to Search:");
    scanf("%d",&iValue);

    iRet = SearchLastOccurance(ptr , iSize , iValue);

    if(iRet == -1)
    {
        printf("Element does not Occured ");
    }
    else
    {
        printf("Element Occured at %d\n",iRet);
    }
    free(ptr);

    return 0;
}