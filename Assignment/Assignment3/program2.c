//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :   It is used to display the factors.
//  Input :         Integer
//  Output :        Integers
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<=iNo; i++)
    {
        if((iNo % i == 0))                                  //Business logic
        {
            printf("%d\t", i);
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
    int iValue= 0 ;
    printf("Enter the number: \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 6    Output : 1	  2	 3	6	
// Input1 : -10  Output : 1	  2	 5	10
// Input :  8    Output : 1   2  4  8  
//////////////////////////////////////////////////////////////