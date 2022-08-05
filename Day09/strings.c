#include <stdio.h>
#include <string.h>
#include <stdint.h>
int strcmp1(char* str1, char* str2)
{
        int i=0;
        while (1)
        {
            if (str1[i]!=str2[i])
            {
                return str1[i]-str2[i];
            }else if (str1[i]=='\0' && str2[i]=='\0')
            {
                return 0;
            } 
            i++;
        }
}

struct Point 
{
    double x;
    double y;
};
void printPoint(struct Point p)
{
     printf("x = %.1lf, y= %.1lf", p.x,p.y);;
}

struct str_1{
    double a;
    int b;
    char c;
};
union r 
{
    uint16_t num;
    uint8_t b[2];
};
int main()
{
    //struct str_1 asd;
    //printf("%d\n", sizeof(asd));

    /*
    char str1[] = "asd";
    char str2[] = "asc";
    printf("%d\n", strcmp1(str1,str2));
    */
 /*
    struct Point p1;
    struct Point p2 = { .x=56, .y=68.3};
    p1.x = 256.3;
    p1.y = 34.2;
    printf("x = %.1lf, y= %.1lf\n", p1.x,p1.y);
    printf("x = %.1lf, y= %.1lf\n",p2.x,p2.y);
  */

    union r r;
    r.num = 0xabcd;
    printf("%x\n", r.b[0]);  
    printf("%x\n", r.b[1]);

    return 0;
}