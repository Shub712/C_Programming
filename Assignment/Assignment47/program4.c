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
//  Function name : DisplayPrime
//  Description :   Use to display the prime numbers 
//  Input :         Integer
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          1/1/2026
///////////////////////////////////////////////////////////////

void DisplayPrime(PNODE first)
{
 
    int No = 0;
    int i = 0;
    int iCnt = 0;

    while(first != NULL)
    {
        No = first -> data;
        iCnt =0;
         
        if(No>1)
        {
            for(i = 2; i * i<= No; i++)
            {
                if(No % i == 0)
                {
                    iCnt++;
                    break;
                }
            }

            if(iCnt == 0)
            {
                printf("%d\t", No);
            }
        }

        first = first -> next;
    }
    printf("\n");

}

int main()
{
    PNODE head = NULL;


    InsertFirst(&head, 8);
    InsertFirst(&head, 5);
    InsertFirst(&head, 4);
    InsertFirst(&head, 3);

    Display(head);

    DisplayPrime(head);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  
//  Input : 5   3   6   8      Output : 5   3  
// 
//
//////////////////////////////////////////////////////////////