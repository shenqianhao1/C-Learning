/*
 * 实验二：选择结构程序设计
 * 第 8 题：字符类型判断
 * 题目：输入一个字符，使用 if-else 多分支结构判断它是大写字母、小写字母、数字字符还是其他字符。
 * 来源：实验报告；仅整理格式，保留原来的计算逻辑和输入格式。
 */

#include <stdio.h>
int main(void)
{
    char ch;

    printf("请输入一个字符：");
    scanf_s("%c", &ch, 1);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("字符%c是大写字母\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("字符%c是小写字母\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("字符%c是数字字符\n", ch);
    }
    else
    {
        printf("字符%c是其他字符\n", ch);
    }

    return 0;
}
