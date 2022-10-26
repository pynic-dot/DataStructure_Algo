#include <stdio.h>

void callByAddressFunction(int *a, int *b)
{
  // we will perform swaping here
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void main()
{
  int a = 4, b = 5000;
  printf("\nBefore: Value of a is %d and value of b is %d\n\n", a, b);
  callByAddressFunction(&a, &b);
  printf("After: Value of a is %d and value of b is %d", a, b);
}