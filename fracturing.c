#include <stdio.h>

double calculateDistance(double x1, double y1, double x2, double y2): {
  printf("Enter the value for X1");
  scanf("%f", &x1);

  printf("Enter the value for Y1");
  scanf("%f", &y1);

  printf("Enter the value for X2");
  scanf("%f", &x2);

  printf("Enter the value for Y2");
  scanf("%f", &y2);
  return  sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

int main ( void )
{
Distance = double(calculateDistance(x1, y1, x2, y2));
printf(Distance);
return 0;
}
