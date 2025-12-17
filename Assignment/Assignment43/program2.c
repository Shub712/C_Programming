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
//  Function name : DisplayPrime
//  Description :   used to give the prime number 
//  Input :         
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////
 
void DisplayPrime(PNODE first)
{
    int iCnt = 0, iNo = 0, iDivCnt = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iDivCnt = 0;

        if(iNo > 1)
        {
            for(iCnt = 1; iCnt<= iNo; iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iDivCnt++;
                }
            }

            if(iDivCnt == 2)
            {
                printf("%d it is prime number\n", iNo);
            }
        }

        first = first -> next;
    }
   
}

///////////////////////////////////////////////////////////////
//  Function name : Display
//  Description :   used to Display the node
//  Input :         -
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          17/12/2025
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
    InsertFirst(&head,60);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,11);
    InsertFirst(&head,17);
    InsertFirst(&head,7);

    Display(head);

    DisplayPrime(head);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//   Output : 7 is a prime number
//            17 is a prime number
//            11 is a prime number  
//
//////////////////////////////////////////////////////////////  