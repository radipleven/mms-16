#include <stdio.h>
#include <stdarg.h>
#include <float.h>

int sum (int cnt,...)
{
    int result=0;
    va_list args;
    va_start(args, cnt);
    for (int i = 0; i < cnt; i++)
    {
        result+=va_arg(args,int);
    }
    va_end(args);
    return result;
    

}
int sum2 (int cnt,...)
{
    int result=cnt;
    va_list args;
    va_start(args, cnt);
    int a = va_arg(args,int);
       while (0 != a)
       {  
            
            result+=a;
            a = va_arg(args,int);
       }
       
    va_end(args);
    return result;
    

}
double max (int cnt, ...)
{
    double maxNum = DBL_MIN;
    va_list args;
    va_start(args,cnt);
    for (int i = 0; i < cnt; i++)
    {
        double num = va_arg(args,double);
        if (num >maxNum)
        {
            maxNum=num;
        }
        
    }
    va_end(args);
    return maxNum;
    
}


double avg (int cnt,...)
{
    double result=0;
    va_list args;
    va_start(args, cnt);
    for (int i = 0; i < cnt; i++)
    {
        result+=va_arg(args,int);
    }
    va_end(args);
    return result/cnt;
    

}
int main()
{

    printf("%d\n" ,sum (4, 1, 2, 0,8));
    printf("%d\n" ,sum2 (5, 6, 1, 6, 0, 8));
    printf("%lf\n" ,avg(3, 1, 2, 5));
    return 0;
}