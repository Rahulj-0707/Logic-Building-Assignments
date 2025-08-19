#include<stdio.h>
int Difference(char *str)
{
    int iCapital = 0, iSmall = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }

        *str++;
    }

    iDiff = iSmall - iCapital;
    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);
}