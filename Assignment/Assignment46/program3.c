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
//  Function name : DisplayGreater
//  Description :   used to print the number which is lesser 
//                  than given number
//  Input :         integer
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

bool IsEmpty(PNODE first)
{
    bool bValue = false;

    while(first != NULL)
    {
        if((first -> data) == 0)
        {
            bValue = true;
        }
        else
        {
            bValue = false;
        }
        first = first -> next;
    }
    printf("\n");
    return bValue;
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
    bool bRet = false;

    InsertFirst(&head,0);
    InsertFirst(&head,0);
    InsertFirst(&head,0);
    InsertFirst(&head,0);
    InsertFirst(&head,0);

    Display(head);

    bRet = IsEmpty(head);
    if(bRet == true)
    {
        printf("The List is Empty\n");
    }
    else
    {
        printf("The list is not empty\n");
    }
    
    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  Input : 10,20,30    Output : The list is not empty
//  Input : 0,0,0,0     Output : The list is empty    
// 
//
//////////////////////////////////////////////////////////////