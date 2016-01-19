#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str1[30] = "Ritsumeikan University";
  char str2[30];
  int i = 0;

  while(str1[i] != 0){
    str2[i] = str1[i];
    i++;
  }

  str2[i] = 0;

  printf("%s , %s\n", str1, str2);

  return 0;
}