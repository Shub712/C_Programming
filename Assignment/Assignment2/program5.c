//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description :   It is used to check if number is even or not.
//  Input :         Integer
//  Output :        True or False (Boolean)
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo % 2 ==0))                                        // Business Logic
    {
        return true;
    }

    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("Number is Even \n");
    }

    else
    {
        printf("Number is not even\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 2    Output : Number is even
// Input1 : 11   Output : Number us not even number
//
//////////////////////////////////////////////////////////////