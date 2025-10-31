///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = MultDigits
//  Description = It is use to give multiplication of numbers
//  Input =   Integer
//  Output =  Integer
//  Author =  Shubham Kiran Pawar
//  Date =    31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iSum = 0;
    int iCnt =0;
    
    if(iNo<0)
    {
        iNo = iNo;
    }

    iSum = 1;   
    while (iNo !=0)
    {
        iCnt = iNo % 10;

        if(iCnt != 0)
        {
            iSum = iSum * iCnt;                             // Business Logic
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
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet =  MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   2395         Output - 270
//  Input1 -   246          Output - 48
//  Input1 -   4521         Output - 40
//  Input1 -   4444         Output - 256   
//
//
////////////////////////////////////////////////////////////////////////////