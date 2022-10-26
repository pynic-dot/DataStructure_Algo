// Reversing an Array

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
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d\t", arr.A[i]);
  }
}

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void reverse(struct Array *arr)
{

  int i, j;
  for (i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    swap(&arr->A[i], &arr->A[j]);
  }
}

void reverse2(struct Array *arr)
{
  int *ptr;
  int i, j;
  ptr = (int *)malloc(arr->length * sizeof(ptr));
  for (i = 0, j = arr->length - 1; j >= 0; j--, i++)
  {
    ptr[i] = arr->A[j];
  }
  for (i = 0; i < arr->length; i++)
  {
    arr->A[i] = ptr[i];
  }
}

int main()
{
  struct Array arr = {{2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 9};
  // reverse(&arr);
  reverse2(&arr);
  display(arr);
  return 0;
}