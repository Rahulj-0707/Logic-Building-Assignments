#include<stdio.h>
double FhtoCs(float fTemp)
{
    float fCel = 0.0;
    fCel = (fTemp - 32) * (5.0 / 9.0);
    {
        return fCel;
    }
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f",dRet);

    return 0;

}
