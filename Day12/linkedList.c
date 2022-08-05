#include <stdio.h>
#include <stdlib.h>


typedef struct Node 
{
    long data; 
    struct Node *next;
    
}Node;
void print(Node *head)
{   
    printf("%lu ", head->data);
    if (head->next==NULL)
    {
        putchar('\n');
        return;
    }
    else print(head->next);
}
Node *head1;
void push_back(Node **head, long new_data)
{
    Node *new_node = malloc(sizeof(Node));
    if (!new_node)
    {
        perror("Push back: could not malloc\n");
        exit(-1);
    }
    new_node->data= new_data;
    new_node->next=NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    
    Node *last_node = *head;
    //Find address of last node
    
    while (last_node->next !=NULL)
    {
        last_node = last_node->next;
    }
    
    
    last_node->next=new_node;
    
}

void pop_front(Node** head_pp)
{
    if (!(*head_pp))
    {
        perror("Pop fron: linked list is empty. \n");
        return;
    }
    
    Node *deleted_node = *head_pp;
    *head_pp = (*head_pp)->next;
    free(deleted_node);
    //head1=head;
    //head=head->next;
    //free(head1);
    //-------------
    //Node *deleted_node = head1;
    //head1 = head1->next;
    //free(deleted_node);
}
int main()
{
    Node *a= malloc(sizeof(Node)),
    *b = malloc(sizeof(Node));
    *c = malloc(sizeof(Node)),
    *d = malloc(sizeof(Node));

    a->data=5;
    b->data=8;
    c->data=3;
    d->data=12;

    a->next=b;
    b->next=c;
    c->next=d;
    d->next= NULL;

    Node *e = malloc(sizeof(Node));
    e->data=55;
    e->next=NULL;
    push_back(&a,55);
    push_back(&a,54);
    push_back(&a,45);
    push_back(&a,5678);
    push_back(&a,89);
    push_back(&a,5461);

    print(a);

   pop_front(&a);
   pop_front(&a);
   pop_front(&a);
   pop_front(&a);
   pop_front(&a);
   print(a);

    return 0;
}

