#include <stdio.h>

void callByValueFunction(int a, int b)
{
  // we will perform swaping here
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void main()
{
  int a = 4, b = 5;
  printf("\nBefore: Value of a is %d and value of b is %d\n\n", a, b);
  callByValueFunction(a, b);
  printf("After: Value of a is %d and value of b is %d", a, b);
}