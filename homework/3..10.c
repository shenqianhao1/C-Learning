/*10.编写一个 C 程序，从键盘输入一个正整数 n，求下列数列的前 n 项之和：



提示：外层循环控制项数 1 到 n，内层循环计算当前第 i 项的累加和，最后将每项结果累加到总和 sum 中。
输入输出示例：请输入项数 n:5
数列前 5 项的和为：35*/
















#include<stdio.h>

int main()
{
    int n;
    int i;
    int sum=0;
    int j;
    printf("请输入项数n:");
    scanf_s("%d",&n);
     for(i=1;i<=n;i++)
    {
       for(j=i;j>0;j--)
       {
        sum=sum+j;
       }
    }
    printf("数列的前%d项的和为:%d",n,sum);
    return 0;
}