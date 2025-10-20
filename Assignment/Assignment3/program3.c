//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description :   It is used to display the even factors.
//  Input :         Integer
//  Output :        Integers
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(i=1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))                   // Business Logic
        {
            printf("%d\t", i);
        }
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
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);


    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 8    Output : 2 	4   	8		
// Input1 : 12   Output : 2	    4	    6	  12	
// Input :  10   Output : 2     10 
//////////////////////////////////////////////////////////////