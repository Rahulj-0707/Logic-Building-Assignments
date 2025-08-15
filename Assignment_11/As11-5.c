#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = iCnt * 2;
        printf("%d\t",iMul);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}