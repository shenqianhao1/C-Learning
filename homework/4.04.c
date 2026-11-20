#include<stdio.h>

int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
    {
        scanf_s("%d",&a[i][j]);
    }
}        
        int sum;
      for(int b=0;b<5;b++)
      {
        for(int c=0;c<5;c++)
        {
            if((b==c)||(b+c==4))
            sum=sum+a[b][c];
        }
    }
    int s=0;
    for(int d=0;d<5;d++)
      {
        for (int f=0;f<5;f++)
        {
            if((d==f)||(d+f==4))&&(d%2==0))&(f%2==0)
            s=a[d][f];
        }

      }
      printf("%d\n",sum);
      printf("%d\n",s);

      return 0;
    }

      



