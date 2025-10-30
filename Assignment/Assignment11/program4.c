///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = RangeSumEven
//  Description = It is use to display addition of Even numbers between
//                the range of two numbers
//  Input =  Integer, Integer
//  Output =  Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
//////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iNo1,int iNo2)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo1<=0)
    {
        printf("Invalid Range\n");
    }
    if(iNo2<=0)
    {
        printf("Invalid Range\n");   
    }

    if(iNo2<iNo1)
    {
        printf("Invalid Range\n");  
    }

    for(iCnt=iNo1; iCnt<=iNo2; iCnt++)                                    // Business Logic
    {
        if(iCnt % 2 ==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

    printf("\n");
}

// Time Complexity = O(n)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point: \n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: \n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("The Addition is : %d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   5     Input2 -   10     Output - The Addition is 24	
//  Input1 -  -10    Input2 -   2      Output - Invalid Range		
//  Input1 -   90    Input2 -   18     Output - Invalid Range
//  Input1 -   20    Input2 -   30     Output - The Addition is 150
//
////////////////////////////////////////////////////////////////////////////