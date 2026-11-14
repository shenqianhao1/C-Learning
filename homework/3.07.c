/*7.输入n值，运用循环结构输出下图所示高和上底均为n的直角梯形。
输入输出示例：n=5时的直角梯形：
                                                                *****
                                                               ******
                                                              *******
                                                             ********
                                                            *********
提示：要根据每一行的变化，通过for循环输出空格符，星号以及换行符。*/

#include <stdio.h>

int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=0;b<=n-a-1;b++)
         {
            printf(" ");
         }
          for(b=0;b<=n+a-2;b++)
           {
            printf("*");
           }
           printf("\n");
        }
       
     return 0;
    }
    
        
