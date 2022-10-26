#include <stdio.h>

struct rectangle
{
  int length;
  int breadth;
};

int areaOfRec(struct rectangle r)
{
  int area;
  area = r.breadth * r.length;
  return area;
}

int main()
{
  struct rectangle r;
  int areaOfRectangle;
  printf("Enter the length of Rectangle: ");
  scanf("%d", &r.length);
  printf("Enter the breadth of Rectangle: ");
  scanf("%d", &r.breadth);
  areaOfRectangle = areaOfRec(r);
  printf("Area of triangle is %d", areaOfRectangle);
}