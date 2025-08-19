#include<stdio.h>
#include<string.h>

void Reverce(char *str)
{
    int iStart = 0, iEnd = strlen(str)-1;
    char Temp;

    while (iStart < iEnd)
    {
        Temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = Temp;

        iStart++;
        iEnd--;
    } 
}

int main()
{
    char arr[20];
    char cValue = '\0';

    printf("Enter the string:\n");
    scanf("%[^'\n]s",arr);

    Reverce(arr);
    printf("Reversed string is %s: \n",arr);

    return 0;
}