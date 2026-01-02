////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn ->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        newn->next = *first;
        *first = newn;
    }
}

///////////////////////////////////////////////////////////////
//  Function name : InsertLast
//  Description :   used to insert the node
//  Input :         interger
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof (NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | ->", first ->data);
        first = first -> next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////
//  Function name : CountOdd
//  Description :   used to count odd numbers
//  Input :         -
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

int CountOdd(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        if((first -> data) % 2 != 0)
        {
            iCount ++;
        }
        first = first -> next;
    }
    return iCount;
}

///////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
///////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,4);
    InsertFirst(&head,3);
    InsertFirst(&head,5);
    InsertFirst(&head,7);

    iRet = CountOdd(head);
    printf("The Count of Odd number is : %d\n", iRet);

    Display(head);

}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  Input : -    Output : The Count of pdd number is 3
// 
//
//////////////////////////////////////////////////////////////