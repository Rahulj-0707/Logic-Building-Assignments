#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int Val = 0;
    int iNum = 2; 
    for(Val = 1; Val <= iNo; Val++)
    { 
        printf("%d\n", iNum); 
        iNum += 2;
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}
