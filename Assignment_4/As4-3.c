#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iVlaue = 0;
    printf("Enter number");
    scanf("%d",&iVlaue);
    NonFact(iVlaue);

    return 0;
}
