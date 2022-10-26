#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *p;         // pointer declaration
  int sizeOfArray; // size declaration

  printf("Enter the size of array you want in Heap: ");
  scanf("%d", &sizeOfArray);
  // Dynamically allocating memory in Heap with malloc function
  p = (char *)malloc(sizeOfArray * sizeof(p));

  for (int i = 0; i < sizeOfArray; i++)
  {
    printf("Enter a character at place [%d] of array : ", i);
    scanf("%s", &p[i]);
  }

  printf("Entered characters are:\n");
  for (int i = 0; i < sizeOfArray; i++)
  {
    printf("%c\n", p[i]);
  }
  return 0;
}