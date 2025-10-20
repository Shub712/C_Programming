//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display the Hello or Demo 
//                  based on integer.
//  Input :         Integer
//  Output :        String
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<=10)                                             //Updater
    {
        printf("Hello\n");
    }
    else                                                    // Business Logic
    {
        printf("Demo\n");
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

    printf("Enter The Number: \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 5               Output : "Hello"
// Input1 : 11              Output : "Demo"
//
//////////////////////////////////////////////////////////////