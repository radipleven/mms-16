#include <stdio.h>

int main()
{
    double a,b,result;
    char operation;
    
    while(scanf("%lf %c %lf", &a, &operation, &b) != EOF)
    {  
        
        switch (operation)
        {
        case '+': result = a+b;  printf("%.2lf \n", result); break;
        case '-': result = a-b;  printf("%.2lf \n", result); break;
        case 'x': result = a*b;  printf("%.2lf \n", result); break;
        case '/': result = a/b;  printf("%.2lf \n", result); break;
        default: printf("Invalid input. \n");break;
        }
       
    }
    return 0;
}