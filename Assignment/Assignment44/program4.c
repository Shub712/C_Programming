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
//  Function name : Frequency
//  Description :   used to count frequency of given number
//  Input :         integer
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

int Frequency(PNODE first, int No)
{
    int iCount = 0;

    while(first != NULL)
    {
        if((first -> data)  == No)
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
    InsertFirst(&head,4);
    InsertFirst(&head,5);
    InsertFirst(&head,7);

    iRet = Frequency(head,4);
    printf("The Frequency is : %d\n", iRet);

    Display(head);

}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  Input : -    Output : The frequency is 2
// 
//
//////////////////////////////////////////////////////////////