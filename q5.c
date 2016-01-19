#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, i;
  int sum = 0, mul = 1; 
  scanf("%d", &num);

  for(i=1; i<=num; i++){
    sum += i;
    mul *= i;
  }
  printf("加算の結果%d，乗算の結果%d\n",sum, mul);

  return 0;
}