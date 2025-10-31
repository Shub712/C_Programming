///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = CountRange
//  Description = It is use to count digits between 3 & 7.
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo!=0)
    {
        iDigit = iNo %10;

        if(iDigit >3 && iDigit<7 )                                   // Business Logic
        {
            iSum++;
        }

        iNo = iNo / 10;
    }
    return iSum;
    
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
    int iRet = 0;

    scanf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2395         Output - 1
//  Input1 -   246          Output - 0
//  Input1 -   4521         Output - 2
//  Input1 -   4444         Output - 0   
//
//
////////////////////////////////////////////////////////////////////////////