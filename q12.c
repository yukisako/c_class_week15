#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

  char name[255];
  printf("自分の名前をローマ字入力してください\n");
  gets(name);
  printf("\n私の名前は%sです．文字数は%luです．\n",name, strlen(name));

  return 0;
}