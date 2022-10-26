#include <stdio.h>
#include <stdlib.h>

int main()
{
  // first way to create 2d array
  int A[3][4] = {{1, 2, 3, 4}, {2, 3, 6, 8}, {1, 3, 5, 7}};
  // second way to create 2d array
  int *B[3];
  // 3rd way to crete 3d array using double pointer
  int **C;
  int i, j;

  B[0] = (int *)malloc(4 * sizeof(int));
  B[1] = (int *)malloc(4 * sizeof(int));
  B[2] = (int *)malloc(4 * sizeof(int));

  C = (int **)malloc(3 * sizeof(int *));

  C[0] = (int *)malloc(4 * sizeof(int));
  C[1] = (int *)malloc(4 * sizeof(int));
  C[2] = (int *)malloc(4 * sizeof(int));

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      C[i][j] = A[i][j];
      printf("%d\n", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}