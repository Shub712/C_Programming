//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = CheckGreater
//  Description = It is use to check if number is greater than 100.
//  Input =  Integer
//  Output = String
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo>=100)
    {
        return true;                                        // Business Logic
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number\n");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if(bRet==true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller");
    }


    return 0 ;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input - 100             Output - Greater
//  Input - 10              Output - Smaller
//  Input - 130             Output - Greater
//
//
//////////////////////////////////////////////////////////////