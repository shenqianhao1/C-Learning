/*
 * 实验二：选择结构程序设计
 * 第 2 题：分段函数计算
 * 题目：输入 x，计算分段函数并保留两位小数：-5 <= x < 0 时为 8/(x*x+x+1)；0 <= x < 5 时为 7/(x*x+x-6)；5 <= x <= 10 时为 2/sqrt(x)+8；其他情况为 0。此处按报告代码记录公式。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
#include <math.h>
int main()
{
    double x, r;
    scanf_s("%lf", &x);
    if (-5 <= x && x < 0)
    {
        r = 8 / ((pow(x, 2)) + x + 1);
    }
    else if (0 <= x && x < 5)
    {
        r = 7 / (pow(x, 2) + x - 6);
    }
    else if (5 <= x && x <= 10)
    {
        r = 2 / sqrt(x) + 8;
    }
    else
    {
        r = 0;
    }
    printf("f(%f)=%.2f\n", x, r);
    return 0;
}
// 当 x=2 时分母为 0，可以对此进行单独定义和改进。
