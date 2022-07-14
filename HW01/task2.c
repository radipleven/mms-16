#include <stdio.h>
#include <math.h>
int main()
{

    double height, radius, length;
    double result1,result2;
    scanf("%lf\n%lf\n%lf",&height, &radius, &length);
    result1 = (3.142857*radius*radius)*height;
    printf("%.2lf\n", result1);
    double bottomArea = acos((radius-height)/2) * radius * radius - (radius-height)*(sqrt(2*radius*height-height*height));
    result2 = bottomArea*length;
    printf("%.2lf\n", result2);
    return 0;

}