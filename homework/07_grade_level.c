/*
 * 实验二：选择结构程序设计
 * 第 7 题：百分制成绩等级转换
 * 题目：输入 0 到 100 的整数成绩，使用 switch 输出等级：90 到 100 为 A；80 到 89 为 B；70 到 79 为 C；60 到 69 为 D；0 到 59 为 E。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
int main()
{
    int score;
    printf("请输入成绩：");
    scanf_s("%d", &score);
    switch (score / 10)
    {
    case 10:
    case 9:
        printf("成绩%d等级是A\n", score);
        break;
    case 8:
        printf("成绩%d等级是B\n", score);
        break;
    case 7:
        printf("成绩%d等级是C\n", score);
        break;
    case 6:
        printf("成绩%d等级是D\n", score);
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("成绩%d等级是E\n", score);
        break;
    }
    // 可以增加范围检查。
}
