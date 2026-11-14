/*8.编写一个 C 程序，从键盘输入一个正整数，判断它是否为“回文数”。回文数是指正着读和倒着读都一样的数（例如：121、1331、12321 都是回文数）。
输入输出示例：请输入一个正整数：
12321是一个回文数*/
#include <stdio.h>

int main()
{
    int n, o;
    int r = 0;

    printf("请输入一个正整数：");
   scanf("%d",&n);

    o = n; 

    while (n > 0)
      {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    if (r == o)
       {
        printf("%d是一个回文数\n", o);
    }
    else
    {
        printf("%d不是一个回文数\n", o);
         }


    return 0;
}