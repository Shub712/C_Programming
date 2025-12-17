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
//  Function name : AdditionEven
//  Description :   used to give the addition of even numbers 
//  Input :         
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////
 
void AdditionEven(PNODE first)
{
    int iNo = 0, iSum = 0;

    while(first != NULL)
    {
        iNo = first->data;
        if(iNo % 2 == 0)
        {
            iSum = iSum + iNo;
        }
        first = first -> next;
    }

    printf("The addition of even number is : %d\n", iSum);
   
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

    InsertFirst(&head,40);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    AdditionEven(head);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//   Output : The Addion of even numbers is 70  
//
//////////////////////////////////////////////////////////////  