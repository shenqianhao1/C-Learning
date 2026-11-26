#include<stdio.h>

int main()
{
    double ack(double m,double n);
    double m,n,c;
    scanf_s("%lf,%lf",&m,&n);
    c=ack(m,n);
    printf("%d",c);
    return 0;


}

double ack(double m,double n)
{
    int c;
    if(m==0)
    {
    c=n+1;
    return c;
    }
     if(n==0)
     {
    c=ack(m,n-1);
    return ack(m,n-1);
     }
    else
    {
    c=ack(m-1,ack(m,n-1));
    return ack(m,n);
    }



}