#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "random.h"


typedef struct Product 
{
    unsigned int id; //positive unique number
    float price; //between 1.5 and 200.25
    unsigned short sales_count;// >0
    char name [10]; // randomly selected from the the array names.list
}Product;

int compD1(const void *p1, const void *p2) // ascending
{
    double eps = 0.01;
    
    const Product *prod1=p1, *prod2=p2;
    double sales_diff = prod1->price * prod1->sales_count - prod2->price * prod2->sales_count;
    //vrushtame po malko ot 0 chislo ako p1 e napred v naredbata
    if (fabs(sales_diff)>eps)
    {
        return sales_diff;
    }
    
    int cmp_result = strcmp(prod1->name, prod2->name);
    if (cmp_result !=0)
    {
        return cmp_result;
    }
    return prod2->id - prod1->id;
    
}

void print(Product* product)
{
    printf("Id: %d ", product->id);
    printf("Revenue: %f ", (product->price*product->sales_count));
    printf("Price: %.2f ", product->price);
    printf("Sales count: %d ", product->sales_count);
    int i =0;
    while (product->name[i] != '\0')
    {
        printf("%c",product->name[i++] );
    }
    putchar('\n');
    
}
char *names_list[] = {"jordan", "esteban", "hulio", "ricardo", "montoya", "delarosa" ,"ramirez"};
void init_random_product(Product* product)
{

    static int id_counter =0;
    product->id = id_counter++;
    product->price = randreal(1.5,200.25);
    product->sales_count = rand()%1000;
    strcpy(product->name, names_list[rand()%7]);
}

int main()
{
    srand(time(NULL));
    Product *product_list;
    product_list= malloc(30*sizeof(Product));
    if (!product_list)
    {
        perror("Malloc fail \n");
        return -1;
    }

    int i;
    for ( i = 0; i < 30; i++)
    {
        init_random_product(product_list+i);
    }
    
    qsort(product_list,30,sizeof(Product),compD1);
    for (i = 0; i < 30; i++)
    {
        print(product_list+i);
    }
    

    free(product_list);
    return 0;
}