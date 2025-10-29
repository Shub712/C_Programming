///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = Factorial
//  Description = It is use to display factorial
//  Input =  Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo<0)
    {
        printf("Factorial of a negative number is not possible\n");
    }

    iFact = 1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;                                              // Business Logic
    }

    return iFact;
}

//Time Complexity = O(N) 

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

    iRet = Factorial(iValue);

    printf("The Factorial is :%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  4      Output -    The Factorial is 24	
//  Input -  10     Output -    The Factorial is 3628800
//  Input - -3      Output -    Factorial of a negative number is not possible
//  
//
////////////////////////////////////////////////////////////////////////////