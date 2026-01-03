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
//  Function name : CheckAllPositive
//  Description :   Use to check if all the elements are positive or not
//  Input :         Integer
//  Ouput :         Boolean
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////


bool CheckAllPositive(PNODE first)
{
    bool bValue = false;

    if(first == NULL)
    {
        printf("The Linklist is empty\n");
        return false;
    }

    while(first != NULL)
    {
        if((first -> data) <= 0)   
        {
            bValue = false;
            break;
        }

        else   
        {
            bValue = true;
        }

        first = first -> next;
    }

    return bValue;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;
    
    InsertFirst(&head, 8);
    InsertFirst(&head, 5);
    InsertFirst(&head, -4);
    InsertFirst(&head, 3);
    Display(head);

    bRet = CheckAllPositive(head);

    if(bRet == true)
    {
        printf("All the elements are positive\n");
    }

    else
    {
        printf("All the elements are not positive\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  
//  Input : 4   3   6   8      Output :  All the elements are positive
//  Input : 4   3   -6   8      Output :  All the elements are not positive
// 
//
//////////////////////////////////////////////////////////////