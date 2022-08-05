#include <stdio.h>

double mult (double num1,double num2)
{
    return num1*num2;
}

double sum (double num1,double num2)
{
    return num1+num2;
}

double sub (double num1,double num2)
{
    return num1-num2;
}
double div (double num1,double num2)
{
    return num1/num2;
}

int main()
{
    /*
    double(*calcFunc)(double, double);
    calcFunc= sum;
    printf("%.2lf\n",calcFunc(5.1,3));
    calcFunc= sub;
    printf("%.2lf\n",calcFunc(5.1,3));
    calcFunc= mult;
    printf("%.2lf\n",calcFunc(5.1,3));
    calcFunc= div;
    printf("%.2lf\n",calcFunc(5.1,3));
    */

    double (*calcFunc[4])(double,double) = {sum,sub,mult,div};
    int num;
    scanf("%d", &num);
    printf("%.2lf\n", calcFunc[num](5.1,3));
    return 0;
}