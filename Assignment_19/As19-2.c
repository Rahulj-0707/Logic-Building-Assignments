#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0, iOddCount = 0, iDiff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++;
        }
        else 
        {
            iOddCount++;
        }
    }
    iDiff = iEvenCount - iOddCount;
    return iDiff;
    
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory:");
        return -1;
    }
    printf("Enter %d element\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements : %d:",iCnt);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}