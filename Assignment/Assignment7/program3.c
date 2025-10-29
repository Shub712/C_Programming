//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = Display
//  Description = It is use to print negative value to positive value
//  Input =  Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt= -iNo; iCnt<=iNo; iCnt++)                     // Business Logic
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
    
}

// Time Complexity = O(N)

//////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  5     Output - -5  -4  -3  -2  -1  0  1  2  3  4  5
//  Input -  2     Output - -2  -1  0  1  2
//  Input -  3     Output - -3  -2  -1  0  1  2  3
//  
//
/////////////////////////////////////////////////////////////