#include<stdio.h>

int main()
{
    int a[4];
    int get(int a[]);
    get (a);
    return 0;

}

int get(int a[])
 {
    for (int i = 0; i < 4; i++)
{
    a[i] = getchar();
}
for (int i = 0; i < 4; i++)
{
    printf("%c", a[i]);

    if (i < 3)
    {
        printf(" ");
    }
}
printf("\n");
return 0;
 }