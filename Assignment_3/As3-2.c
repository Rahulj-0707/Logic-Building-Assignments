#include<stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(i == 1)
        {
            printf("%d\n",i);
        }
        else if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}
        
    

