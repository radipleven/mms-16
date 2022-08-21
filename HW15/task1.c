#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "linked_list.h"
#define COUNT 14
char *titles[]= {   "The Fault in Our Stars ",  "The Alchemist", 
                    "To Kill a Mockingbird ",   "The Hunger Games ", 
                    "The Da Vinci Code ",       "The Perks of Being a Wallflower ", 
                    "The Kite Runner "};
                    
char *authors[]={ "John Green", "Paulo Coelho",   "Harper Lee", "Dan Brown","Stephen Chbosky","Kathryn Stockett"};


typedef struct Book{

    char title[150];
    char author[100];
    int pages;
    double price;

}Book;

int randint(int min, int max)
{
    return min+rand()%(max-min+1);
}

double randreal(double min, double max)
{
    return min + ((double)rand() / RAND_MAX)*(max-min);
}

void randinit(void) {
    srand(time(NULL));
}


void bookInit(Book* books)
{
    
    books->pages = randint(5, 2000);
    books->price = randreal(1.00, 1000.00); 
    strcpy(books->title, titles[rand()%7]);
    strcpy(books->author, authors[rand()%6]);
}

void print(Book* books)
{
    printf("Book:   %s\nAuthor: %s\nPages:  %d\nPrice:  %.2f\n\n", 
            books->title, books->author, books->pages, books->price);
}

int compare(const void *bk1, const void *bk2)
{
    const Book *book1 = bk1, *book2 = bk2;

    int cmpResult = strcmp(book1->title, book2->title);
    if (!cmpResult) return cmpResult;
    
}
int main()
{
    
    // to compile -> gcc Homework15.c -o test -D COUNT=5
    randinit();
    Book* books = malloc(COUNT*(sizeof(Book)));

    int(*fptr)(const void*, const void*);
    fptr = &compare;

    if (!books){
        perror("Malloc failed!\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < COUNT; i++) bookInit(books+i);

    for (int i = 0; i < COUNT; i++) print(books+i);
    
    qsort(books, COUNT, sizeof(Book), fptr);

    
    
    FILE* writeBooks = fopen("books.txt", "wb");// write in binary
    fwrite(books, (5*sizeof(Book)), COUNT, writeBooks);
    fclose(writeBooks);

    FILE* readBooks = fopen("books.txt", "rb");
    fread(books, (5*sizeof(Book)), COUNT, readBooks);

    for (int i = 0; i < COUNT; i++) print(books+i);
    fclose(readBooks);


    /* task2

    Node *linked_list = NULL;
    for (int i = 0; i < COUNT; i++) push_back(&ll, (books+i));
    print_ll(ll);

    */
    free(books);
    return EXIT_SUCCESS;
}