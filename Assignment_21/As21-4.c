#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iCount = 0, iTemp = 0;

    printf("Numbers with exactly 3 digits are:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];
        iCount = 0;

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iCount++;
            iTemp = iTemp / 10;
        }

        if(iCount == 3)  
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);

    return 0;
}
