#include <stdio.h>

double taylor(int x, int n)
{
  static double result = 1;
  if (n == 0)
  {
    return result;
  }
  else
  {
    result = 1 + (x * result) / n;
  }
  return taylor(x, n - 1);
}
int main()
{
  printf("%lf", taylor(2, 30));
  return 0;
}