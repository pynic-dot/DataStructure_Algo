#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *A;
  int size;
  int length;
};

// Display
void display(struct Array arr)
{
  printf("Elements are: ");
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d", arr.A[i]);
  }
}

// Append
void append(struct Array *arr, int val)
{
  if (arr->length >= arr->size)
  {
    printf("Overflow.......");
  }
  else
  {
    arr->A[arr->length++] = val;
  }
}

// Insert
void insert(struct Array *arr, int index, int val)
{
  if (index >= 0 && index <= arr->length && arr->length < arr->size)
  {
    for (int i = arr->length; i > index; i--)
    {
      arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = val;
    arr->length++;
  }
}

// Delete
int delete (struct Array *arr, int index)
{
  int delVal = 0;
  if (index <= 0 && index < arr->length)
  {
    delVal = arr->A[index];
    for (int i = index; i < arr->length; i++)
    {
      arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
    return delVal;
  }
}

// Swap
void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

// LinearSearch
int LinearSearch(struct Array *arr, int val)
{
  for (int i = 0; i < arr->length; i++)
  {
    if (arr->A[i] == val)
    {
      swap(&arr->A[i], &arr->A[0]);
      return i;
    }
  }
  return -1;
}

// BinarySearch
int BinSearch(struct Array arr, int val)
{
  int l, h, m;
  l = 0;
  h = arr.length - 1;
  sort(&arr);
  while (l <= h)
  {
    m = (l + h) / 2;
    if (arr.A[m] == val)
    {
      return m;
    }
    else if (val < arr.A[m])
    {
      h = m - 1;
    }
    else
    {
      l = m + 1;
    }
    return -1;
  }
}

// RecursionBinSearch
int RBinSearch(int a[], int l, int h, int val)
{
  int m = (l + h) / 2;
  if (l <= h)
  {
    if (val == a[m])
    {
      return m;
    }
    else if (val > a[m])
    {
      return RBinSearch(a, m + 1, h, val);
    }
    else
    {
      return RBinSearch(a, l, m - 1, val);
    }
  }
  return -1;
}

// Get
int get(struct Array arr, int index)
{
  if (index >= 0 && index < arr.length)
  {
    return arr.A[index];
  }
  return -1;
}

// Set
void set(struct Array *arr, int index, int val)
{
  if (index >= 0 && index < arr->length)
  {
    arr->A[index] = val;
  }
}

// Max
int max(struct Array arr)
{
  int max = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] > max)
    {
      max = arr.A[i];
    }
  }
  return max;
}

// Min
int min(struct Array arr)
{
  int min = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] < min)
    {
      min = arr.A[i];
    }
  }
  return min;
}

// Sum
int sum(struct Array arr)
{
  int sum = 0;
  for (int i = 0; i < arr.length; i++)
  {
    sum += arr.A[i];
  }
  return sum;
}

// Avg
float avg(struct Array arr)
{
  return (float)sum(arr) / arr.length;
}

// Reverse
void reverse(struct Array *arr)
{
  int i, j;
  int *reverse;
  reverse = (int *)malloc(arr->length * sizeof(int));
  for (i = 0, j = arr->length - 1; j >= 0; j--, i++)
  {
    reverse[i] = arr->A[j];
  }
  for (i = 0; i < arr->length; i++)
  {
    arr->A[i] = reverse[i];
  }
}

// Reverse2
void reverse2(struct Array *arr)
{
  int i, j;
  for (i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    swap(&arr->A[i], &arr->A[j]);
  }
}

// sort
void sort(struct Array *arr)
{
  int i = 0;
  int x = 1;
  while (x)
  {
    if (i == arr->length)
    {
      i = 0;
    }
    if (arr->A[i] > arr->A[i + 1])
    {
      swap(&arr->A[i], &arr->A[i + 1]);
    }
    if (isSorted(*arr) == 1)
    {
      x = 0;
    }
    i++;
  }
}

// Is Sorted
int isSorted(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.A[i] > arr.A[i + 1])
    {
      return 0;
    }
  }
  return 1;
}

// InsertSort
void InsertSort(struct Array *arr, int x)
{
  int i = arr->length - 1;
  if (arr->length == arr->size)
  {
    return;
  }
  while (i >= 0 && arr->A[i] > x)
  {
    arr->A[i + 1] = arr->A[i];
    i--;
  }
  arr->A[i + 1] = x;
  arr->length++;
}

// Array Marge
struct Array *merger(struct Array *arr1, struct Array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->A[i] < arr2->A[j])
    {
      arr3->A[k] = arr1->A[i];
      k++;
      i++;
    }
    else if (arr1->A[i] > arr2->A[j])
    {
      arr3->A[k] = arr1->A[j];
      j++;
      k++;
    }
    else if (arr1->A[i] == arr2->A[j])
    {
      arr3->A[k++] = arr1->A[j++];
      i++;
    }
  }
  for (; i < arr1->length; i++)
  {
    arr3->A[k++] = arr1->A[i];
  }
  for (; j < arr2->length; j++)
  {
    arr3->A[k++] = arr2->A[j];
  }
  arr3->length = k;
  arr3->size = 10;
  return arr3;
}

// Union

// Intersection

// Differece

// main
int main()
{
  struct Array arr1;
  int ch;
  int x, index;

  printf("Enter Size of Array");
  scanf("%d", &arr1.size);
  arr1.A = (int *)malloc(arr1.size * sizeof(int));
  arr1.length = 0;
  do
  {
    printf("\n\nMenu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6.Exit\n");

    printf("enter you choice ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("Enter an element and index");
      scanf("%d%d", &x, &index);
      Insert(&arr1, index, x);
      break;
    case 2:
      printf("Enter index ");
      scanf("%d", &index);
      x = Delete(&arr1, index);
      printf("Deleted Element is %d\n", x);
      break;
    case 3:
      printf("Enter element to search ");
      scanf("%d", &x);
      index = LinearSearch(&arr1, x);
      printf("Element index %d", index);
      break;
    case 4:
      printf("Sum is %d\n", Sum(arr1));
      break;
    case 5:
      Display(arr1);
    }
  } while (ch < 6);

  return 0;
}