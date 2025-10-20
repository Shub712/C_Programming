//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   It is used to give difference between 
//                  factor numbers and non factor number 
//  Input :         Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if (iNo <= 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;                           // Business Logic
        }
    }

    return iSumFact - iSumNonFact ;              
}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the numer : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);
    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 8      Output : -14	
// Input1 : 10     Output : -29  	
// Input : -8      Output : -14
//
//////////////////////////////////////////////////////////////