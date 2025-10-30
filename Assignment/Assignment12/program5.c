///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = DivByFive
//  Description = It is use to display if number is divisible by five
//  Input =   Integer
//  Output =  String
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool DivByFive(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;                                                        // Business Logic
    }
    else
    {
        return false;                          
    }
}

// Time Complexity - O(n)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = DivByFive(iValue);
    
    if(bRet == true)
    {
        printf("It is divisible by five \n");
    }
    else
    {
        printf("It is not divisible by five \n");

    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   12        Output - It is not divisible by five	
//  Input1 -   10        Output - It is divisible by five	
//  Input1 -   6     I   Output - It is not divisible by five    
//
////////////////////////////////////////////////////////////////////////////