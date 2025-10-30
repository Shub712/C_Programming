///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = RangeDisplayRev
//  Description = It is use to display the range between two numbers in reverse order.
//  Input =  Integer, Integer
//  Output =  Integer
//  Author = Shubham Kiran Pawar
//  Date = 29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;
    if(iNo2<iNo1)
    {
        printf("Invalid Range\n");
    }

    for(iCnt=iNo2; iCnt>=iNo1; iCnt--)
    {
        printf("%d\t", iCnt);                                                // Business logic
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   10    Input2 -   20     Output -  20	19	18	17	16	15	14	13	12	11	10	
//  Input1 -  -10    Input2 -   2      Output -  2	1	0	-1	-2	-3	-4	-5	-6	-7	-8	-9	-10		
//  Input1 -   90    Input2 -   18     Output -  Invalid Output
//
////////////////////////////////////////////////////////////////////////////