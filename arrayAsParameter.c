#include <stdio.h>

void funcArray(int *A)
{
  printf("First element of array is: %d", A[1]);
}

int main()
{
  int A[] = {2, 3, 4, 5, 6};
  int n = 5;
  funcArray(A);
  return 0;
}