#include <stdio.h>
int main()
{
  int a;
  int *p, **k;
  p = &a;
  k = &p;
  printf("Enter any Number to check pointer:\n");
  scanf("%d", p);
  printf("Pointer holds : %d\n", *p);
  printf("Address of 'a' is : %d\n", &a);
  printf("Address of '*p' is : %d\n", &p);
  printf("Value holded by 'p' is : %d\n", &a);
  printf("Value holded by 'k' is : %d\n", k);
  printf("Value holded by 'k' is : %d\n", **k);
  return 0;
}