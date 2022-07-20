#include <stdio.h>

int main()
{
  int a, b, flag;
  puts("依次输入a,b两个数:");
  scanf("%d %d", &a, &b);
  flag = a > b; // flag保存关系运算结果
  
  if (a > b)
  {
    puts("a 值大于 b 值");
    // 当只有一条语句时,花括号是可以省略掉的,不过建议保留下来,这样代码结构更加清晰
  }
  else
  {
    puts("a 值小于 b 值");
  }
  printf("a > b 表达式在 c 语言中得到的结果是: %d\n", flag);

  return 0;
}
/* c 语言中,由于没有布尔值,所以逻辑运算的结果是通过 0 -> false; 非0 -> true 的 */