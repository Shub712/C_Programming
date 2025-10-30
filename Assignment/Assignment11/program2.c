///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = RangeDisplayEven
//  Description = It is use to display the even number between the range of two numbers
//  Input =  Integer, Integer
//  Output =  Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    if(iNo2<iNo1)
    {
        printf("Invalid Range\n");
    }

    for(iCnt=iNo1; iCnt<=iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }                                             // Business logic
    }
    printf("\n");

}

// Time Complexity = O(N)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2=0;

    printf("Enter Starting Point: \n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : \n");
    scanf("%d", &iValue2);\

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   5     Input2 -   10     Output -  6	8	10	
//  Input1 -  -10    Input2 -   2      Output -  -10   -8	-6	-4	-2	0	2		
//  Input1 -   90    Input2 -   18     Output -  Invalid Output
//
////////////////////////////////////////////////////////////////////////////