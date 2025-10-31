///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = CountOdd
//  Description = It is use to count Odd number of given numbers.
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
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

        if(iDigit %2 != 0)                                   // Business Logic
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

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2345         Output - 2
//  Input1 -   12987        Output - 3
//  Input1 -   -987         Output - 2
//  Input1 -   4444         Output - 5   
//
//
////////////////////////////////////////////////////////////////////////////