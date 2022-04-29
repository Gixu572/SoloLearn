#include <stdio.h>

int main()
{
  char name[20];
  printf("Hello enter your name\n");
  fgets(name, 15, stdin);
  fputs(name,stdout);
  // printf(name);
  return 0;
}