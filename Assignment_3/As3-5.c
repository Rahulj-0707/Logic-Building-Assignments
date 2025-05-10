#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cVal)
{
    if(cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || 
       cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
    {
        return TRUE;  
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE) 
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel"); 
    }
    return 0;
}

