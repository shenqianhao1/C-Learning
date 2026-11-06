/*
 * 实验二：选择结构程序设计
 * 第 9 题：一元二次方程求根
 * 题目：输入方程 a*x*x+b*x+c=0 的系数 a、b、c，使用嵌套 if-else，根据判别式输出两个不等实根、两个相等实根或无实根；a=0 时提示不是一元二次方程，根保留两位小数。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, d, x1, x2;
    printf("请输入一元二次方程的系数a,b,c:");
    scanf_s("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("不是一元二次方程");
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d < 0)
        {
            printf("无实根");
        }
        else if (d == 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            printf("方程有两个相等的实根%.2f", x1);
        }
        else if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("方程有两个不相等的实根%.2f和%.2f", x1, x2);
        }
    }
    return 0;
}
