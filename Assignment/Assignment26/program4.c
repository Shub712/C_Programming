////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Function is use to display the Pattern  
//  Input   :       Integer
//  Output  :       Integer & # & *
//  Author  :       Shubham Kiran Pawar
//  Date    :       21/11/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0, iCount  = 0 ;

    iCount = 1;
    for(iCnt = 1; iCnt<=iNo*2; iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("*\t");
        }
        else                                                           // Business Logic
        {
            printf("#\t%d\t", iCount);
            iCount++;
        }
    }
    printf("\n");

   
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter The Number of elements :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input : 5       Output : #  1  *   #  2   *   # 3   *   #    4   *   #   5   *   
//  Input : 2       Output : #  1  *   #  2   *
//
//////////////////////////////////////////////////////////////////////////////////