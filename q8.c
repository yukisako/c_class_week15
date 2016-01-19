#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[5] = {1,2,3,4,5};
  int b[5] = {1,1,2,2,3};
  int c[5], i;

  for(i=0; i<5;i++){
    c[i] = a[i] + b[i];
    printf("c[%d] = %d\n", i, c[i]);
  }



  return 0;
}