/*
 * 实验二：选择结构程序设计
 * 第 3 题：加减算术运算练习
 * 题目：输入加号或减号，随机产生两个 0 到 100 的整数，用户输入计算结果，程序判断结果正确与否并提示。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, d;
    char op;
    printf("请用户输入加或减运算符：");
    scanf_s("%c", &op, 1);
    srand((unsigned)time(NULL));
    a = rand() % 101;
    b = rand() % 101;
    if (op == '+')
    {
        c = a + b;
    }
    else if (op == '-')
    {
        c = a - b;
    }
    printf("请用户输入计算结果：%d%c%d=", a, op, b);
    scanf_s("%d", &d);
    if (d == c)
    {
        printf("运算正确，好棒");
    }
    else
    {
        printf("正确结果为%d%c%d=%d", a, op, b, c);
    }
    return 0;
}
