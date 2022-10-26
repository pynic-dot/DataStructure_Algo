#include <stdio.h>
#include <math.h>

struct Array
{
  int A[11];
  // int size;
  int length;
  /* data */
};

int binaySearch(struct Array a, int key)
{
  int l, mid, h;
  l = 0;
  h = a.length - 1;
  while (l <= h)
  {
    mid = trunc((l + h) / 2);
    if (a.A[mid] == key)
    {
      return mid;
    }
    else if (key > a.A[mid])
    {
      l = mid + 1;
    }
    else
    {
      h = mid - 1;
    }
    /* code */
  }
  return -1;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10};
  printf("%d", binaySearch(arr, 3));
  return 0;
}