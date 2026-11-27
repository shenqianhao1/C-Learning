#include<stdio.h>

int main()
{
    double ack(double m,double n);
    double m,n,c;
    scanf_s("%lf,%lf",&m,&n);
    c=ack(m,n);
    printf("%lf",c);
    return 0;


}

double ack(double m,double n)
{
    
    if(m==0)
    {
    
    return n+1;
    }
     if(n==0)
     {
    
    return ack(m-1,1);
     }
    else
    {
    return ack(m-1,ack(m,n-1));
    }



}