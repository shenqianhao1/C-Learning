/*
 * 实验二：选择结构程序设计
 * 第 5 题：计算指定年月的天数
 * 题目：输入年份和月份，使用 switch 分支，并在二月分支内使用 if 判断平年或闰年，输出该月天数。题目要求另测试 1 至 12 月和非法月份。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>

int main()
{
    int y, m, c;
    printf("输入年份，月份");
    scanf_s("%d,%d", &y, &m);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        c = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        c = 30;
        break;
    case 2:
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            c = 29;
        else
            c = 28;
        break;
    }
    printf("%d年%d月有%d天", y, m, c);
    return 0;
}
