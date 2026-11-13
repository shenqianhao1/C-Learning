/*
 * 实验二：选择结构程序设计
 * 第 4 题：体指数与体重类型判断
 * 题目：输入身高 h（米）和体重 w（千克），按公式 t = w/(h*h) 判断体重类型：t < 18 为低体重；18 <= t < 25 为正常体重；25 <= t <= 27 为超重体重；t > 27 为肥胖。
 * 输入输出示例：请输入身高(m)和体重(kg):1.75 65
 * 为正常体重
 */

#include <stdio.h>
#include <math.h>
int main()
{
    double w, h, t;
    printf("请输入身高(m)和体重(kg):");
    scanf_s("%lf %lf", &h, &w);
    t = w / (h * h);
    if (t < 18)
    {
        printf("为低体重");
    }
    else if (t >= 18 && t < 25)
    {
        printf("为正常体重");
    }
    else if (t >= 25 && t <= 27)
    {
        printf("为超重体重");
    }
    else
    {
        printf("为肥胖");
    }
    return 0;
}
// 可以进行分界点检查以及正数检查。
