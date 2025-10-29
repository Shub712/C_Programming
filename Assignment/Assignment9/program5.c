///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = FactorialDiff
//  Description = It is use to find difference between Odd factorial 
//                and Even factorial
//  Input =  Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0; int iDiff1=0; int iDiff2 = 0 ;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    iDiff1 = 1; iDiff2 = 1;

    for(iCnt = 1; iCnt<=iNo; iCnt ++)                                       // Business Logic
    {
        if(iCnt % 2 ==0)
        {
            iDiff1 = iDiff1 * iCnt;
        }

        if(iCnt % 2 != 0)
        {
            iDiff2 = iDiff2 * iCnt;
        }
    }

    return iDiff1 - iDiff2 ;
  
}

//  Time Complexity - O(2/N)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("The difference is :  %d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  10      Output - 2895
//  Input -  5       Output - -7
//  Input - -5       Output - -7
//  
//
////////////////////////////////////////////////////////////////////////////