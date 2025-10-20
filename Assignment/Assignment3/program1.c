//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to print even numbers
//  Input :         Integer
//  Output :        Integers
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    
    int iNum = 2;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++ )
    {
        printf("%d\t",iNum);

        iNum = iNum + 2 ;                                   //Business Logic
    }

        printf("\n");   

}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter The Number :\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 2    Output : 2  4
// Input1 : 10   Output : 2  4   6  8  10  12  14  16  18  20
//
//////////////////////////////////////////////////////////////