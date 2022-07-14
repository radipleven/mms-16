#include <stdio.h>
#include <math.h>
int main()
{

    double result1;
    double result2;
    double mass;
    double height;
    scanf("%lf\n%lf", &mass, &height);
    result1 = mass/ (height*height);
    result2 = 1.3* (mass/pow(height,2.5));
    printf("%.2lf\n",result1);
    printf("%.2lf\n",result2);

    return 0;
}