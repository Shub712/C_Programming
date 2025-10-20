//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description :   It is used to print the non factors.
//  Input :         Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt) !=0)
        {
            printf("%d", iCnt);                            // Business Logic
        }
    }
}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0 ;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);
    return 0;

}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 8      Output : 3   5   6   7	
// Input1 : 10     Output : 3   4   6   8  9  	
// Input :  -8     Output : 3   5   6   7
//
//////////////////////////////////////////////////////////////