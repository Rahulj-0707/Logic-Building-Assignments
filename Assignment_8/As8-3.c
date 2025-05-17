#include<stdio.h>
int KiloMeter(int iNo)
{
    int imet = 1000;
    int iMet = 0;
    iMet = iNo * imet;
    return iMet;
}

int main()
{
    int ivalue = 0,iRet = 0;

    printf("enter number:");
    scanf("%d",&ivalue);

    iRet = KiloMeter(ivalue);

    printf("%d",iRet);

    return 0;
}