#include<stdio.h>
void Display(int iNo, int iFrequency)
{   
    int Val = 0;
    for(Val = 1; Val <= iFrequency; Val++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter the Number");
    scanf("%d",&iValue);
    printf("Enter the Frequency");
    scanf("%d",&iCount);
    Display(iValue, iCount);
    return 0;
}