#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("Number is Divisible by 5 %d\n",Arr[iCnt]);
        }
        
    }
   
}
int main()
{
    int iSize = 0, iCnt = 0;
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

    Display(p, iSize);


    free(p);

    return 0;
}