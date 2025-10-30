///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = SumOfEvenFactors
//  Description = It is use to display the sum of the even factors.
//  Input =   Integer
//  Output =  Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int SumOfEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)                                 // Business Logic
        {
            iSum = iSum + iCnt;
        }
    } 
    
    return iSum;
}
// Time Complexity - O(n)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumOfEvenFactors(iValue);

    printf("The Sum of Even Factors is : %d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   12        Output - The Sum of Even Factors is 12	
//  Input1 -   10        Output - The Sum of Even Factors is 2	
//  Input1 -   6     I   Output - The Sum of Even Factors is 2	    
//
////////////////////////////////////////////////////////////////////////////