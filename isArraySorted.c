// Checking if Array is sorted

#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void display(struct Array arr)
{
  printf("Elements are:  ");
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d\t", arr.A[i]);
  }
}

int isSorted(struct Array arr)
{
  for (int i = 0; i < arr.length - 1; i++)
  {
    if (arr.A[i] > arr.A[i + 1])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  struct Array arr = {{1, 2, 4, 5, 6, 7}, 10, 6};
  printf("%d\n", isSorted(arr));
  display(arr);
  return 0;
}