#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


  

void display(Node* head)
{
    Node *curr = malloc(sizeof(Node));
     if(head == NULL) 
       {
         printf("List is empty\n");
       }else 
        {
            curr = head;
        do
        {
            printf("Data = %d\n", curr->data);
            curr = curr->next; 
        }
        while (curr != head);
        }
    
}

struct Node* insertAfter(struct Node *cll, int skipCount, int newElem) 
{
    Node *curr = cll;
    if (skipCount>0 && skipCount <= 1000000)
    {
        for (int i = 0; i < skipCount; i++)
        {
            curr=curr->next;
        }
        curr->data=newElem;
    }
    
    
    return curr;
    
}
int main()
{
    
  
    int n, data;
    scanf("%d", &n);
    Node *circular_linked_list = malloc(sizeof(Node));
    Node *prev;
    scanf("%d", &data);
    circular_linked_list->data = data;
    circular_linked_list->next = NULL;
    prev = circular_linked_list;
    for(int i = 2;i<= n;i++)
    {
        Node *newNode = malloc(sizeof(Node));
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        prev->next = newNode;
        prev = newNode;
   }
    prev->next = circular_linked_list;

    display(circular_linked_list);
    putchar('\n');
    insertAfter(circular_linked_list,3,101);
    display(circular_linked_list);
    return 0;
}