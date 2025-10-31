///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = DisplayDigit
//  Description = It is use to display digits in reverse order
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDgit= 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDgit = iNo % 10;
        printf("%d\n", iDgit);                              // Business Logic

        iNo = iNo / 10;
    }
    
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
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);


    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2395         Output - 5      Input1 -   -9087         Output - 7
//                                   9                                        8  
//                                   3                                        0
//                                   2                                        9  
//                                                                              
//                                   
//                                   
//  
//
////////////////////////////////////////////////////////////////////////////