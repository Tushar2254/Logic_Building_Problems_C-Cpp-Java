#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;          // *
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{}

int Count(PNODE head)
{
    return 0;
}

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn ->next = NULL;
    newn -> prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        (*head) -> prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn =(PNODE) malloc(sizerof(NODE)); 

    newn ->data = no;
    newn ->next = NULL;
    newn -> prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
    
    }
}

void DeleteFirst(PPNODE head)
{}

void DeleteLast(PPNODE head)
{}

void InsertAtPos(PPNODE head, int no, int pos)
{}

void DeleteAtPos(PPNODE head, int pos)
{}

int main()
{
    PNODE first = NULL;


    return 0;
}



