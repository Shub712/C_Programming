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
//  Function name : DisplayGreterThanAVg
//  Description :   Use to display the elements greater than average
//  Input :         Integer
//  Ouput :         Boolean
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////


void DisplayGreaterThanAvg(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int Sum = 0;
    int Count = 0;
    float fAvg = 0.0f;

    
    if(first == NULL)
    {
        printf("The Linklist is empty\n");
        return;
    }

    while(temp != NULL)
    {
        Sum = Sum + (first -> data);
        Count ++ ;
        temp = temp -> next;
    }

    fAvg = (float)Sum / Count;

    printf("Average is : %.2f\n", fAvg);
    printf("Elements greaterthan average:");

    while(first != NULL)
    {
        if(first -> data > fAvg)
        {
            printf("%d ", first -> data);
        }
        first = first -> next;
    }
    printf("\n");

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);
    Display(head);

    DisplayGreaterThanAvg(head);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  
//  Input : 10   20   30  40      Output : 20   30  40
// 
//
//////////////////////////////////////////////////////////////