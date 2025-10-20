//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to do the multiplication of 
//                  factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMult = 1;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;                         // Business Logic
        }

    }

    return iMult;

}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("The Multiplication of Factor is : %d", iRet);


    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 6      Output : The multiplication of factor is 6	
// Input1 : 12     Output : The multiplication of factor is 144    	
// Input :  8      Output : The multiplication of factor is 8
// Input :  -8     Output : The multiplication of factor is 8 
//
//////////////////////////////////////////////////////////////