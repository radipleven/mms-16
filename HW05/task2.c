#include <stdio.h>
#include <math.h>

int triangle(double a,double b, double c, double* S, double* P)
{
        if (a+b>c && a+c >b && b+c >a)
        {
            *P = a+b+c;
            double p = (a+b+c)/2;
            *S = sqrt(p*(p-a)*(p-b)*(p-c));

            return 0;
        }else       
        {
            printf("Invalid triangle sides!\n" );
            return -1;
        }
        
        
}
int main()
{
        double a,b,c,S,P;
        while ( scanf("%lf %lf %lf", &a,&b,&c)!= EOF)
        {
            if (triangle(a,b,c,&S,&P)==0)
            {
            printf("S = %.2lf \n" ,S);
            printf("P = %.2lf \n" ,P);
            }
        }
        
        return 0;
}