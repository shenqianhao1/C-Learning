/*
 * 实验二：选择结构程序设计
 * 第 1 题：存款利息计算
 * 题目：输入存款金额 money、存期 year 和年利率 rate，计算到期利息：money * (1 + rate)^year - money，输出保留两位小数。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
#include <math.h>
int main()
{
    double money, year, rate, c;
    scanf_s("%lf,%lf,%lf", &money, &year, &rate);
    c = money * pow(1 + rate, year) - money;
    printf("利息为%.2f\n", c);

    return 0;
}
