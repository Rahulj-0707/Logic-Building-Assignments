#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;
    
    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory:");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ", iCnt);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number:");
    scanf("%d",&iValue); 

    iRet = Frequency(p,iSize,iValue);
    printf("Result %d",iRet);

    free(p);

    return 0;
}
