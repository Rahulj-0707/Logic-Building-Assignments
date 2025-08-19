#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }

    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit:");
    }

    else
    {
        printf("It is not an Digit:");
    }

    return 0;
}