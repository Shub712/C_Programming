//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to give summation of non factor numbers.
//  Input :         Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;                             //Business Logic
        }
    }

    return iSum;

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

    printf("Enter the Number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("The Addition is : %d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 8      Output : The addition is 21	
// Input1 : 10     Output : The addition is 37  	
// Input : -8      Output : The addition is 21
//
//////////////////////////////////////////////////////////////