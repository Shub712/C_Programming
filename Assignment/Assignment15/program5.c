///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = CountDiff
//  Description = It is use to ind the difference between the sum of even digits 
//                and the sum of odd digits in a given number.
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iSum1 = 0;
    int iSum2 = 0;
    int iCnt =  0 ;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while (iNo!=0)
    {
        iCnt = iNo % 10;
        if(iCnt % 2 == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else                                                    //Business Logic
        {
            iSum2 = iSum2 + iCnt;
        }

        iNo = iNo/10;
    }
    return (iSum1 - iSum2);    
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

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2395         Output - -15
//  Input1 -   246          Output -  12
//  Input1 -   4521         Output -  0
//  Input1 -   4444         Output -  20   
//
//
////////////////////////////////////////////////////////////////////////////