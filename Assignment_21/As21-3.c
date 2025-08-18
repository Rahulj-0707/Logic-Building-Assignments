#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0]; 
    int iMax = Arr[0];
    int iDiff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin >= Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }

        if(iMax <= Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    iDiff = iMax - iMin;

    return iDiff;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elments\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr,iSize);
    printf("Difference is : %d\n",iRet);

    free(ptr);

    return 0;
}