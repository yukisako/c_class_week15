#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 5, b = 6;

  if (a<5)
    a = a + b;
  else if (b < 5)
    a = a * b;
  else {
    a = a / 2;
    b = b * 2.0 / 5.0;
  }
  printf("a = %d, b = %d\n",a, b );
  //予想 a = 2, b = 2
  return 0;
}