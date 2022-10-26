#include <stdio.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr1)
{
  printf("The elements are: \n");
  for (int i = 0; i < arr1.length; i++)
  {
    printf("%d\n", arr1.A[i]);
  }
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int Get(struct Array arr, int index)
{
  if (index >= 0 && index < arr.length)
  {
    return arr.A[index];
  }
  return -1;
}

void Set(struct Array *arr, int index, int x)
{
  if (index >= 0 && index < arr->length)
  {
    arr->A[index] = x;
  }
}

int Max(struct Array arr)
{
  int Max = arr.A[0];
  printf("\n\nMax number is: \n");
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.A[i] > Max)
    {
      Max = arr.A[i];
    }
  }
  return Max;
}

int Min(struct Array arr)
{
  int Min = arr.A[0];
  printf("\n\nMin number is: \n");
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.A[i] < Min)
    {
      Min = arr.A[i];
    }
  }
  return Min;
}

int Sum(struct Array arr)
{
  int sum = 0;
  printf("Sum of the array is : \n ");
  for (int i = 0; i < arr.length; i++)
  {
    sum += arr.A[i];
  }
  return sum;
}

float Avg(struct Array arr)
{
  return (float)Sum(arr) / arr.length;
}

int main()
{
  struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 25}, 10, 9};
  printf("%d", Sum(arr1));
  printf("%d", Max(arr1));
  printf("%d", Min(arr1));
  // Display(arr1);

  return 0;
}