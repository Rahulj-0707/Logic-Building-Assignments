#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumOfEven = 0;
    int iSumOfOdd = 0;
    int iDiff = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if((iDigit % 2) == 0)
        {
            iSumOfEven += iDigit;
        }
        else
        {
            iSumOfOdd += iDigit;
        }
    }
    iDiff = iSumOfEven - iSumOfOdd;
    return iDiff;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}

