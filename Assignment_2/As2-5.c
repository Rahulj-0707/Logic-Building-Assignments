#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
    printf("Even Number",iNo);
    }
    else
    {
        printf("Odd Number",iNo);
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);
    return 0;
}

