//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = MultipleDisplay
//  Description = It is use to display the 5 multiple of number
//  Input =  Integer
//  Output = Integer
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////


void MultipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt<=5; iCnt ++)                          // Business Logic
    { 
      printf("%d\t", iNo * iCnt);                
    }

    printf("\n");
}

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

    MultipleDisplay(iValue);
    

    return 0;
}

//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  4      Output -    4	8	12	16	20	
//  Input -  10     Output -    10  20  30  40  50	
//  Input - -3      Output -    3  6  9  12  15
//  
//
/////////////////////////////////////////////////////////////