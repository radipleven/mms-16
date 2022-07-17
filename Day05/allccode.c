#include <stdio.h> //row1
//row2
//rpw3
//row4
//row5
int main() //row6 
{//row7
printf( "asdasdasd\n asdasdasd\n  Hello to MMS C Camp \n");//row8
printf( " asd asd asd asd\n asdasdasd\n asd");//row9
return 0;//row10
}//row11
#include <stdio.h>

int main()
{
    int num;
    scanf("%d\n", &num);
    if(num%2 ==0)
    {
        printf("even\n");
    }else  printf("odd\n");
    return 0;
}#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d \n %d \n %d", &num1,&num2, &num3);
    
    
    printf("%d\n", num1+num2+num3);
    //fprintf(stderr,"Hello to stderr\n");
    return 0;

}#include <stdio.h>
#include <math.h>

int main ()
{
    double num1;
    scanf("%lf", &num1);
    printf("%.2lf\n", sqrt(num1));
    return 0;
}