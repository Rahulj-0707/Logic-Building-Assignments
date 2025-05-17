#include <stdio.h>
double SqureMeter(int iValue)
{
  float fArea = 0.0;
  float iArea = 0.0929;

  fArea = iValue * iArea;
  {
    return fArea;
  }
}

int main()
{
  int ivalue1 = 0;
  double dRet = 0.0;

  printf("enter area in square feet");
  scanf("%d", &ivalue1);

  dRet = SqureMeter(ivalue1);

  printf("%f", dRet);

  return 0;
}