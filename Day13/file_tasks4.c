#include <stdio.h>

int arr[] = { 1325, 1512, 125, 123,2141};
int arrC = 10;
int main ()
{
    FILE* f = fopen("arr_file","w");
    if (f==NULL)
    {
        perror("Couldn't open file \n");
        return -1;
    }
    int* i;
    for ( i = arr; i < arr +arrC; i++)
    {
        fprintf(f,"%d ", *i);
    }
    fclose(f);
 }

 /* read??

 int main()
 {
    FILE* f = fopen("arr_file","r");
    int cur_num;
    while ( fscanf("%d", &cur_num)!= EOF)
    {
        arr[arrC] = cur_num;
        arrC++;
    }
    while(;fscanf(f,"%d",arr+(arrC++))){}
    for (int i =0;i<arrC; i++)
    {
        printf("%d ", arr[i]);
    }
    fclose(f);
    return 0;
 }


 */