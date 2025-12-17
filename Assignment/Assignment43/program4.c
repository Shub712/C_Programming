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
//  Function name : SecMax
//  Description :   used to give the second maximum number 
//  Input :         
//  Ouput :         Integer
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
///////////////////////////////////////////////////////////////

void SecMax(PNODE first)
{
    int iMax = -1, iSecondMax = -1;

    if(first == NULL && first->next == NULL)
    {

        return;
    }

    while(first != NULL)
    {
        if((first -> data) > iMax)
        {
            iSecondMax = iMax;
            iMax = first -> data;
        }
        else if(first -> data > iSecondMax && first->data < iMax)
        {
            iSecondMax = first -> data;
        }

        first = first->next;
    }

    printf("The Second maximum number is : %d\n", iSecondMax);
 
}

///////////////////////////////////////////////////////////////
//  Function name : Display
//  Description :   used to Display the node
//  Input :         -
//  Ouput :         -
//  Author :        Shubham Kiran Pawar
//  Date :          16/12/2025
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

    Display(head);

    SecMax(head);

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//   Output : The Second Maximum number : 60
//
//////////////////////////////////////////////////////////////