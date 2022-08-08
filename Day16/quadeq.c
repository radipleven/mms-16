#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
// char **argv, char *argv[]
int main(int argc, char *argv[]){
    char fmt[10];
    int opt;
    double a,b,c;
    int p =2;
  while ((opt = getopt(argc, argv, "a:b:c:p:")) != -1) 
  {
     switch (opt) 
     {
      case 'a':
       sscanf(optarg,"%lf",&a);
        break;
      case 'b':
        sscanf(optarg,"%lf",&b);
        break;
      case 'c':
        sscanf(optarg,"%lf",&c);
        break;
      case 'p':
        sscanf(optarg,"%lf",&p);
        break;  
     }
  }

  double d = b*b - 4*a*c;
  double x1 = (-b + sqrt(d))/ 2*a;
  double x2 = (-b - sqrt(d))/ 2*a;
  if (d < 0)
  {
    perror("No real roots");
    exit(-1);
  }
  
  sprintf(fmt, "x1 = %%.%lf  ", x1);
  sprintf(fmt,"x2 = %%.%lf  \n", x2);
  printf(fmt,x1);
    return 0;
}