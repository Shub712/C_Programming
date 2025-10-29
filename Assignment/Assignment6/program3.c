//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = CheckEqual
//  Description = It is use to check if numbers are equal or not
//  Input =  Integer, Intefer
//  Output = String
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;                        // Business Logic
    }
    else
    {
        return false;
    }
}

// Time Complexity is O(1)

//////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1= 0 , iValue2 = 0;
    bool bRet = false;

    printf("Enter the two numbers \n");
    scanf("%d %d", &iValue1,&iValue2);

    bRet = CheckEqual(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 - 100    Input2 - 100    Output - Equal
//  Input1 - 12     Input2 -  11    Output - Not Equal
//  Input1 - 10     Input2 - -10    Output - Not Equal
//  Input1 - 13     Input2 -  13    Output - Equal
//
//////////////////////////////////////////////////////////////