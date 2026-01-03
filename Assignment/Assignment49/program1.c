////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

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
//  Function name : Difference
//  Description :   Use to give give difference 
//  Input :         Integer
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////


int Difference(PNODE first)
{
    int iMin = 0;
    int iMax = 0;

    if(first == NULL)
    {
        printf("The Linklist is empty\n");
        return-1;
    }

    iMin = first -> data;
    iMax = first -> data;

    while(first != NULL)
    {
        if(first -> data < iMin)
        {
            iMin = first -> data;
        }

        if(first -> data > iMax)    
        {
            iMax = first -> data;
        }

        first = first -> next;
    }

    return iMax - iMin;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head, 8);
    InsertFirst(&head, 5);
    InsertFirst(&head, 4);
    InsertFirst(&head, 3);

    Display(head);

    iRet = Difference(head);
    printf("The difference is : %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  
//  Input : 4   3   6   8      Output :  The Difference is 3
// 
//
//////////////////////////////////////////////////////////////