//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////
//
//  Function Name = OddDisplay
//  Description = It is use to print Odd number of the value
//  Input =  Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
      if (iCnt % 2 != 0)                       // Business Logic
      {
        printf("%d\t", iCnt);
      } 
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

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  18     Output - 1	3	5	7	9	11	13	15	17	
//  Input -  6      Output - 1	3	5	
//  Input - -5      Output - 1  3
//  
//
/////////////////////////////////////////////////////////////