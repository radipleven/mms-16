#include <stdio.h>
#define ABS(n) (((n) < 0) ? -(n) : (n))
#define EPS 0.001

double sqrt2(double x) // Newtoon - Raphson method
{
    double y = 1.0;
    while (ABS(x/y - y) > EPS )
    {
        y=(y+x/y)/2;
    }
    return y;
}
int main()
{
    printf("%.6lf\n", sqrt2(45));

    return 0;
}