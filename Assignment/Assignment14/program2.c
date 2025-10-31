///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = ChkZero
//  Description = It is use to check if number has zero in it or not
//  Input =   Integer
//  Output =  Boolean
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDgit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDgit = iNo %10;

        if(iDgit == 0)                                          // Business Logic
        {
            return TRUE;
        }

        iNo = iNo /10;
    }

    return FALSE;   
       
}

// Time Complexity = O(n)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    bRet =  ChkZero(iValue);

    if (bRet == FALSE)
    {
        printf("Contains No Zero\n");
    }
    else
    {
        printf("Contains Zero\n");
    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2345         Output - It Contains no zero
//  Input1 -   1023         Output - It Contains Zero
//  Input1 -   -987         Output - It Contains no zero   
//
////////////////////////////////////////////////////////////////////////////