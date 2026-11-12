#include <stdio.h>
#include<math.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double w, h, t;
    printf("请输入身高（cm）和体重（kg)：");
    scanf_s("%lf %lf",&h, &w);
    t = w / (h * h);
    if (t < 18)
    {
        printf("为低体重");
    }
    else if (t >= 18 && t < 25)
    {
        printf("为正常体重");
    }
    else if (t >= 25 && t < 27)
    {
        printf("为超重体重");
    }
    else
    {
        printf("为肥胖");
    }
    return 0;
    }
