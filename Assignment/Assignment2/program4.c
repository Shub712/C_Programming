
//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display the number and its frequency.
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)                                        // Updater
    {
        iFrequency = -iFrequency;
    }

    
    for(iCnt = 1; iCnt<=iFrequency; iCnt ++ )                // Business Logic
    {
        printf("%d", iNo);  
    }


}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iValue);

    printf("Enter the Frequency: \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 5    Input2 : 3           Output : 5 5 5
// Input1 : 11   Input2 : 2           Output : 11 11
//
//////////////////////////////////////////////////////////////