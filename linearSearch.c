#include <stdio.h>

struct Array
{
  int A[5];
  int size;
  int length;
};

void swaping(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int linearSearch(struct Array *arr, int key)
{
  int i;
  for (i = 0; i < arr->length; i++)
  {
    if (arr->A[i] == key)
    {
      swaping(&arr->A[i], &arr->A[0]);
      return i;
    }
  }
  return -1;
}

int main()
{
  struct Array arr = {{4, 3, 2, 1, 5}, 10, 5};
  printf(" index is : %d ", linearSearch(&arr, 4));

  return 0;
}