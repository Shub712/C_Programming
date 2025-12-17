////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

#pragma pack(1)
struct node
{
    int data;
   struct node *next;
};  

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////////
//  Function name : InsertFirst
//  Description :   used to insert the node
//  Input :         interger
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
       newn -> next = (*first);
       (*first) = newn;
    }
}

///////////////////////////////////////////////////////////////
//  Function name : LastOcr
//  Description :   used to give the last occurance of the data
//  Input :         interger
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////

void LastOcr(PNODE first, int No)
{
    int iCnt = 1, iLast = -1;

    while(first != NULL)
    {
        if(first -> data == No)
        {
            iLast = iCnt;                      // Business Logic     
        }

        first = first -> next;
        iCnt++;
    }

    printf("The last occurance : %d\n", iLast);
}

///////////////////////////////////////////////////////////////
//  Function name : Display
//  Description :   used to Display the node
//  Input :         -
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->", first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
///////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    LastOcr(head,30);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  Input : 30   Output : 6
//
//////////////////////////////////////////////////////////////