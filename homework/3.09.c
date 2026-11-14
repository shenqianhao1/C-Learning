#include<stdio.h>

int main()
{
    int a=66;
    int n=1;
    int b;
    do{
        printf("请输入你猜的数字：");
        scanf("%d",&b);
        if(b==a)
        {
            printf("恭喜你，猜对了！你一共猜了%d次",n);
            break;
        }
        else if(b<a)
        {
        printf("猜小了，再试一次\n");
        n=n+1;
        }
        else
        {
            printf("猜大了，再试一次\n");
            n++;
        }
    }while(1);
    return 0;
}

