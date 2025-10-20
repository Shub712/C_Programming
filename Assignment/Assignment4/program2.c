//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   It is used to print the factors in decending
//                  order.
//  Input :         Integer
//  Output :        Integer
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt>1; iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d",iCnt);                            // Business Logic
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
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);


    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 8      Output : 8   4  2	
// Input1 : 10     Output : 10  5  2   	
// Input :  12     Output : 12  6  4  3  2
// Input :  -8     Output : 8  4   2
//
//////////////////////////////////////////////////////////////