#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    } 
}
int main()
{
    int iValue = 0;
    printf("Enter the Number");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}
