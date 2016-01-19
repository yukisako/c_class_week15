#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 1;
  int sum = 0;
  while(sum<=10000){
    sum += i*i;
    i++;
  }

  printf("%d日目に10000円超えます\n", i);

  return 0;
}