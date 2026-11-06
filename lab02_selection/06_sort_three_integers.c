/*
 * 实验二：选择结构程序设计
 * 第 6 题：三个整数从小到大排序
 * 题目：输入三个整数 a、b、c，按从小到大的顺序输出。题目要求输入的三个数不能已经按从小到大排列。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("请输入三个整数：");
    scanf_s("%d,%d,%d", &a, &b, &c);
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if (a > c)
    {
        d = a;
        a = c;
        c = d;
    }
    if (b > c)
    {
        d = b;
        b = c;
        c = d;
    }
    printf("排序结果：%d %d %d ", a, b, c);
    return 0;
}
