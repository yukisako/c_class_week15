#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  for (i=10; i>=1; i--){
    printf("%d", i);
  }

  printf("\n");

  //結果10987654321
  return 0;
}