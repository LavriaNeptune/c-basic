#include <stdio.h>

int main()
{
  int retry = 3;
  do
  {
    puts("执行一次函数");
    retry--;
    printf("retry 的值为:%d \n", retry);
  } while (retry > 0);
}