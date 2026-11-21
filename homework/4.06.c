#include<stdio.h>

int main()
{
    int m,n;
    printf("请输入行数和列数:m,n");
    scanf_s("%d,%d",&m,&n);
    int a[m][n];
    int b[m][n];
     scanf_s("%d",&a[m][n]);
     scanf_s("%d",&b[m][n]);
       int c[m][n];
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);

        }
        printf("\n");
       }
       return 0;
}