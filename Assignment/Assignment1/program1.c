
//////////////////////////////////////////////////////////////
//
//  Required Header File 
//
//
//////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////
//
//  Function Name = Divide
//  Description = It is use to divide two numbers
//  Input = Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 17/10/2025
//////////////////////////////////////////////////////////////




int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 < 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;                                     // Business Logic
    
    return iAns;
}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1=15, iValue2=5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);
    printf("the divsion is :%d\n", iRet);


    return 0;
}
