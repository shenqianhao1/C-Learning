#include <stdio.h>

int main()
{
    int a = 66;
    int n = 1;
    int b;

    printf("猜一个1-100之间的数字吧！\n");

    do {
        printf("请输入你猜的数字：");
        scanf("%d", &b);

        if (b == a) {
            printf("恭喜你，猜
                对了！你一共猜了 %d 次\n", n);
            break;
        } else if (b < a) {
            printf("猜小了，再试一次！\n");
            n++;
        } else {
            printf("猜大了，再试一次！\n");
            n++;
        }
    } while (1);

    return 0;
}