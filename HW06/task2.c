#include <stdio.h>

unsigned long factorial (unsigned long n)
{
    unsigned long res =1;
    while (n>0)
    {
        res*=n--;
    }
    return res;
}
double sin (double x)
{
    double res=0;
    int counter=0;
    int j =0;
    for (int i=0;i<=x;i++)
    {
        if (i%2!=0)
        {
            counter++;
            double num = pow (x,i);
            double denom = fact (i);
            double fract = num/denom;
            if (j%2!=0)
            {
                 res -= fract;
            }
            else
            {
                res += fract;
            }
            
        }
    }
    return res;
}

int main ()
{

    double x,res;
    scanf ("%lf",&x);
    res=sin(x);
    printf ("%lf",res);
    return 0;
    
}