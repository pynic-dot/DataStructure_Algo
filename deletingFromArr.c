#include <stdio.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d ", arr.A[i]);
  }
}

int Delete(struct Array *arr, int index)
{
  int x = arr->A[index];
  if (index >= 0 && index < arr->length)
  {
    for (int i = index; i < arr->length - 1; i++)
    {
      arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
    return x;
  }
  return 0;
}

int main()
{
  struct Array arr1 = {{1, 2, 3, 4, 5}, 10, 5};
  Delete(&arr1, 0);
  Display(arr1);
  return 0;
}