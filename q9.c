#include <stdio.h>

double average(double a, double b){

  double ave;
  ave = (a + b) /2;
  return ave;
}

int main(int argc, char const *argv[])
{
  double x = 45.3, y = 23.6, ans;

  ans = average(x,y);

  printf("Answer = %f \n", ans);

  return 0;
}