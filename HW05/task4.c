#include <stdio.h>
#include <math.h>

int quadEq(double a, double b,double c, double *S, double *P)
{
    double determinant = b*b -4*a*c;

    if (determinant >=0)
    {
        *S = ((b-2*b)+sqrt(determinant))/2*a;
        *P = ((b-2*b)-sqrt(determinant))/2*a;
        return 0;
    }else 
    {
        printf("No real roots\n");
        return -1;
    }
    
   
}
int main()
{
    double a,b,c,S,P;
        while ( scanf("%lf %lf %lf", &a,&b,&c)!= EOF)
        {
            if (quadEq(a,b,c,&S,&P)==0)
            {
            printf("x1 = %.2lf \n" ,S);
            printf("x2 = %.2lf \n" ,P);
            }
        }
    return 0;
}