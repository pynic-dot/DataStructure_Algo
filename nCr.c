#include <stdio.h>

int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return fact(n - 1) * n;
}

int nCr(int n, int r)
{
  int num, den;
  num = fact(n);
  den = fact(r) * fact(n - r);

  return num / den;
}

// recusive function for nCr

int NCR(int n, int r)
{
  if (n == r || r == 0)
  {
    return 1;
  }
  else
  {
    return NCR(n - 1, r) + NCR(n - 1, r - 1);
  }
}

int main()
{
  // printf("%d\n", nCr(5, 1));
  printf("%d\n", NCR(5, 3));
  return 0;
}