///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = count_factors
//  Description = It is use to display the count of the factors of a number
//  Input =  Integer
//  Output =  Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////


int count_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum++;                                                         // Business Logic
        }
    }
    return iSum;

    printf("\n");
}

// Time Complexity - O(n)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Total Number of factors is : %d", count_factors(iValue));

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   12        Output - Total number of factors is 6	
//  Input1 -   4         Output - Total number of factors is 3		
//  Input1 -   6     I   Output - Total number of factors is 4	    
//
////////////////////////////////////////////////////////////////////////////