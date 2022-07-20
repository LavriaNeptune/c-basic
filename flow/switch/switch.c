#include <stdio.h>

int main()
{
  int flag = 1;
  switch (flag)
  // 根据 switch 后面所跟的条件表达式值跳转至对应 case 处执行代码。PS:
  {
  case 1:
  // case xx -> 表示程序跳转的标签...
    puts("条件值为 1");
    break;
  case 2:
    puts("条件值为 2");
    break;
  case 3:
    puts("条件值为 3");
    break;
  default:
    break;
  }
}