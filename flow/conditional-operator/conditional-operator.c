#include <stdio.h>
int main()
{
  int a = 100, b = 1, max;

  max = a > b ? a : b;

  printf("最大值 max 为:%d", max);
  return 0;
}