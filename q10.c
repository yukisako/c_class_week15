#include <stdio.h>

int sum=10;

void calc(){
  int x = 200;
  sum += x;
}

int main(int argc, char const *argv[])
{
  int x = 50;
  sum += x;
  calc();
  printf("x=%d, sum=%d.\n", x, sum);

  //結果 50, 260

  return 0;
}