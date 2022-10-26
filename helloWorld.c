#include <stdio.h>

struct helloWorld
{
  /* data */
  int a[10];
  int size;
};

int main()
{
  struct helloWorld arr = {{1, 2, 4}, 10};

  printf("Entered %d\n", sizeof(arr));

  return 0;
}