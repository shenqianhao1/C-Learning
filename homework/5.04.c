#include<stdio.h>

int main()
{   
    int n;
    double c,x;
    double p(int n,double x);
    printf("请输入n,x");
    scanf_s("%d,%lf",&n,&x);
     c=p(n,x);
     printf("%lf",c);

     return 0;
}

double p(int n, double x)
{
    if (n == 0)
    {
        return 1.0;
    }

    if (n == 1)
    {
        return x;
    }

    return ((2.0 * n - 1) * x - p(n - 1, x)
        - (n - 1) * p(n - 2, x)) / n;
}