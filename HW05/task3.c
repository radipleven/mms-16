#include <stdio.h>
int rectangle (double w, double h, double *S, double *P)
{
    if (w!= 0 && h!=0)
        {
            *P = w+h+w+h;
            *S = w*h;
            return 0;
        }else       
        {
            printf("Invalid triangle sides!\n" );
            return -1;
        }
}
int main()
{
    double a,b,S,P;
        while ( scanf("%lf %lf", &a,&b)!= EOF)
        {
            if (rectangle(a,b,&S,&P)==0)
            {
            printf("S = %.2lf \n" ,S);
            printf("P = %.2lf \n" ,P);
            }
        }
    return 0;
}