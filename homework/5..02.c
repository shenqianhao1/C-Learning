#include<stdio.h>


int main()
{
    int a[3][3];
    int change(int a[][3]);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf_s("%d",&a[i][j]);
        }
    }

    change(a);
    printf("转置后的矩阵\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
    return 0;
}
   int change(int a[][3])
   {
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            int t;
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
            
         }
    }
    return 0;
}