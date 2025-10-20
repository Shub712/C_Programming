//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display the stars 
//  Input :         Integer
//  Output :        *
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;                                          // Business Logic
                                    
    }
    iCnt = 1;
    while(iCnt<=iNo)          
        {
            printf("*\t");
            iCnt ++;
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

    printf("Enter the number :\n");
    scanf("%d", &iValue);
    
    Display(iValue);
}

//////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 5               Output : *  *  *  *  *
// Input1 : 4               Output : *  *  *  * 
// 
//
//////////////////////////////////////////////////////////////