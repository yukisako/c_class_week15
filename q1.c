#include <stdio.h>

int main(int argc, char const *argv[])
{
  double dt1, dt2;

  dt1 = 5.0 * 2 / 4;
  dt2 = 2 / 4 * 5;

  printf("dt1 = %f, dt2 = %f\n", dt1, dt2);
  //予想 dt1 = 2.5, dt2 = 0

  return 0;
}