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

// Set Union operator
struct Array *setUnion(struct Array *arr1, struct Array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->A[i] < arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
    }
    else if (arr1->A[i] > arr2->A[j])
    {
      arr3->A[k++] = arr2->A[j++];
    }
    else if (arr1->A[i] == arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
      j++;
    }
  }
  for (; i < arr1->length; i++)
  {
    arr3->A[k++] = arr1->A[i];
  }
  for (; j < arr1->length; j++)
  {
    arr3->A[k++] = arr2->A[j];
  }
  arr3->size = 10;
  arr3->length = k;
  return arr3;
}
// intersection of set
struct Array *setIntersection(struct Array *arr1, struct Array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->A[i] < arr2->A[j])
    {
      i++;
    }
    else if (arr1->A[i] > arr2->A[j])
    {
      j++;
    }
    else if (arr1->A[i] == arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
      j++;
    }
  }

  arr3->size = 10;
  arr3->length = k;
  return arr3;
}

// difference of set
struct Array *setDifference(struct Array *arr1, struct Array *arr2)
{
  int i, j, k;
  i = j = k = 0;
  struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->A[i] < arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
    }
    else if (arr1->A[i] > arr2->A[j])
    {
      j++;
    }
    else if (arr1->A[i] == arr2->A[j])
    {
      i++;
      j++;
    }
  }
  for (; i < arr1->length; i++)
  {
    arr3->A[k++] = arr1->A[i];
  }

  arr3->size = 10;
  arr3->length = k;
  return arr3;
}

int main()
{
  struct Array arr1 = {{2, 9, 21, 28, 35}, 10, 5};
  struct Array arr2 = {{2, 3, 9, 18, 28}, 10, 5};
  struct Array *arr3, *arr4, *arr5;
  arr3 = setUnion(&arr1, &arr2);
  arr4 = setIntersection(&arr1, &arr2);
  arr5 = setDifference(&arr1, &arr2);
  printf("Union is:\t");
  display(*arr3);
  printf("\nIntersection is:\t");
  display(*arr4);
  printf("\nDifference is:\t");
  display(*arr5);
  return 0;
}