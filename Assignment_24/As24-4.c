#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    while(*str != '\0')  
    {
        if(*str=='A' || *str=='a' || 
           *str=='E' || *str=='e' || 
           *str=='I' || *str=='i' || 
           *str=='O' || *str=='o' || 
           *str=='U' || *str=='u')
        {
            return true; 
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the String:\n");
    scanf("%[^\n]s",arr);

    bRet = ChkVowels(arr);
    if(bRet == true)
    {
        printf("Contain Vowels\n");
    }
    else
    {
        printf("There is no Vowels\n");
    }

    return 0;
}
