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