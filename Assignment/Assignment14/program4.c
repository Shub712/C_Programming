///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = CountTwo
//  Description = It is use to count 4 in the number
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo!=0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)                                      // Business Logic
        {
            iSum++;
        }

        iNo = iNo/10;   
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
    int iRet =  0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);


    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2345         Output - 1
//  Input1 -   1023         Output - 0
//  Input1 -   -987         Output - 0
//  Input1 -   4444         Output - 4   
//
//
////////////////////////////////////////////////////////////////////////////