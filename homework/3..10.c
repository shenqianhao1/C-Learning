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