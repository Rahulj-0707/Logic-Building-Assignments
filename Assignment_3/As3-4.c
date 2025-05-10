#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = toupper(cValue);
        printf("%c",cValue);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = tolower(cValue);
        printf("%c",cValue);
    }
}
int main()
{
    char CValue = '\0';
    printf("Enter the character\n");
    scanf("%c",&CValue);
    DisplayConvert(CValue);
    return 0;
}
