#include <stdio.h>
 int main()
 {
/*
    float num1= 3.14f;
    printf("%.20f\n",num1);
    printf("float size: %lu\n",sizeof(num1));
    double num2= 3.14;
    printf("%.20lf\n",num1);
    printf("double size: %lu\n",sizeof(num2));
*/

double num1 = 1.1;
double num2 = 0;


for (int i = 0; i < 11; i++)
{ 
    num2+=0.1;
    printf("num1 = %lf num2 = %lf\n", num1,num2);
    
    
    
}
if (num1==num2)
    {
        printf("Equals\n");
    }else  printf("Not Equals\n");

    return 0;
 }