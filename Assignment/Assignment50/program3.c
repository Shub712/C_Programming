////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }

    else
    {
        newn -> next = *first;
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

    newn = (PNODE)malloc(sizeof(NODE));

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
        newn ->next = NULL;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////
//  Function name : CheckSorted
//  Description :   Use to check whether the list is in ascending
//                  order or not
//  Input :         Integer
//  Ouput :         Boolean
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////


bool CheckSorted(PNODE first)
{
    if(first == NULL || first -> next == NULL)
    {
        return true;
    }

    while(first -> next != NULL)
    {
        if((first -> data) > (first -> next -> data))
        {
            return false;
        }
        first = first -> next;
    }

    return true;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;
    
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);
    Display(head);

    bRet = CheckSorted(head);
    if(bRet == true)
    {
        printf("The Link list is sorted\n");
    }
    else
    {
        printf("The Link List is not sorted\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  
//  Input : 10   20   30  40      Output : The LinkList is Sorted
//  Input : 10   5    4   40      Output : The LinkList is not Sorted
// 
//
//////////////////////////////////////////////////////////////