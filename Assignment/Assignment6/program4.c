//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////
//
//  Function Name = Multiply
//  Description = It is use to do multiplication of three numbers
//  Input =  Integer, Intefer, Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    // Handled Negative Number
    int iAns = 1;
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
    if(iNo2<0)                              // Business Logic
    {
        iNo2 = -iNo2;
    }
    if(iNo3<0)
    {
        iNo3 = -iNo3;
    }

    // Handled Non Zero numbers

    if(iNo1!= 0)
    {
        iAns = iAns * iNo1;
    }
    if(iNo2!= 0)
    {
        iAns = iAns * iNo2;
    } 
    if(iNo3!= 0)
    {
        iAns = iAns * iNo3;
    }

    // Handled zero numbers

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        iAns = 0;
    }
   
    return iAns;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
//////////////////////////////////////////////////////////////

int main()
{   
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("The Multiplication is :%d\n",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 - 7    Input2 - 0    Input3 - 5    Output - The Multiplication is 35
//  Input1 - 12   Input2 - 12   Input3 - 10   Output - The Multiplication is 1440
//  Input1 - -10  Input2 - 12   Input3 - 20   Output - The Multiplication is 2400
//  Input1 - 0    Input2 - 0    Input3 - 0    Output - The Multiplication is 0
//  
//////////////////////////////////////////////////////////////