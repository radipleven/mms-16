#include <stdio.h>

double max (double a, double b)
{
    if(a>b)
    {
        return a;
    }else if (b>a)
    {
        return b;
    }else return a;
}
int main ()
{
    double a,b,c;
    scanf("%lf\n%lf\n%lf", &a,&b,&c);
    printf("%lf\n", max(max(a,b),c));
    return 0;
}