#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum *= iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d", &iValue);
    iRet = MultFact(iValue);
    printf("%d", iRet);

    return 0;
}
