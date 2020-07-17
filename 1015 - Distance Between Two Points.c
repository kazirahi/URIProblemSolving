#include<stdio.h>
#include<math.h>
int main()
{
    double x,xx,y,yy,dis;
    scanf ("%lf %lf",&x,&y);
    scanf ("%lf %lf",&xx,&yy);
    dis=sqrt(((xx-x)*(xx-x))+((yy-y)*(yy-y)));
    printf ("%.4lf\n",dis);
}
