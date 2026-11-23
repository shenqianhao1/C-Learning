#include<stdio.h>
#include<math.h>
int main()
{
    int big();
    int equal();
    int small();
    double a,b,c;
    if(b*b-a*c>0)
     big(a,b,c);
     else if(b*b-2*a*c==0)
     equal(a,b,c);
     else
     small(a,b,c);
    

   return 0; 
}
double x1,x2,d;

int big(double x,double y,double z)
{
    d=sqrt(y*y-4*x*z);
    x1=((-y)+d)/(2*x);
    x2=((-y)-d)/(2*x);
    printf("x1=%f,x2=%f",x1,x2);
    return 0;
    
}
int equal(double x,double y,double z)
  {
    d=sqrt(y*y-4*x*z);
    x1=d/(2*x);
    x2=d/(2*x);
    printf("x1=%d,x2=%d",x1,x2);
    return 0;

  }
  int small(double x,double y, double z)
  {
    d=sqrt(-(y*y-4*x*z));
    x1=((-y)+d)/(2*x);
    x2=((-y)-d)/(2*x);
    printf("x1=%fi,x2=%fi",x1,x2);
    return 0;

  }
