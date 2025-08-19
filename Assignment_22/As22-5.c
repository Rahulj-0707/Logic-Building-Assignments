#include<stdio.h>

void DisplaySchedule(char ch)
{
    if((ch == 'A') || (ch == 'a'))
    {
        printf("Your exam at 7.00 AM\n");
    }

    else if((ch == 'B') || (ch == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }

    else if((ch == 'C') || (ch == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }

    else if((ch == 'D') || (ch == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }

    else
    {
        printf("Invalid Division:\n");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter your Division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}