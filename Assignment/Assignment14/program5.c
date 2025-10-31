///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = CountTwo
//  Description = It is use to count numbers which are less than 6
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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

        if (iDigit < 6)                                      // Business Logic
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

    iRet = Count(iValue);

    printf("%d", iRet);


    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2345         Output - 4
//  Input1 -   12987        Output - 2
//  Input1 -   -987         Output - 0
//  Input1 -   4444         Output - 4   
//
//
////////////////////////////////////////////////////////////////////////////