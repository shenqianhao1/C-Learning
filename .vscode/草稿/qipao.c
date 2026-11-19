#include<stdio.h>

int main()
{
    int a[10];
    int i,j,t;
    int n=0;
    printf("input 10 numbers :");
    for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
    printf("\n");
   }
    for(j=0;j<=9;j++)
    {
        if(a[n]>a[n+1])
        {
            t=a[n];
            a[n]=a[n+1];
            a[n+1]=t;
        }
    }
    
    
}