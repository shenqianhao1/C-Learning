#include<stdio.h>

int add(int x, int y)
{
    return x + y;
}
int main()
{
    printf("请输入行数和列数:m,n");
    int m, n;
    scanf_s("%d,%d", &m, &n);
    int a[100][100];
    int b[100][100];
    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf_s("%d", &a[i][j]);
            
        }
    }
      for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf_s("%d", &b[i][j]);
            
        }
    }
    int c[100][100];
    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n;j++)
        {
            c[m][n]=a[m][n]+b[m][n];
            printf("%d ",c[m][n]);

        }
        printf("\n");
    }
    return 0;
}
