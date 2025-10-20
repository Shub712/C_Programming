/////////////////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name - FindLargest
//  Description -   Function is use to find the largest number among 
//                  three numbers.
//  Input -         Interger, Integer, Integer
//  Output-         Integer
//  Author Name -   Shubham Kiran Pawar
//  Date -          20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1>=iNo2) && (iNo1>=iNo3))
    {
        return iNo1;
    }
    else if((iNo2>=iNo1) && (iNo2>=iNo3))                                              // Business Logic
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
  

}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point of main function
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2, iValue3 = 0;
    int iRet = 0;

    printf("Enter The Three Numbers\n");
    scanf("%d, %d, %d", &iValue1, &iValue2, &iValue3);

    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("The Largest Value is : %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
//  Test Cases
// 
//  Input 1 = 12    Input2 = 15     Input3 = 16     Output = The Largest Value  is 16
//  Input 1 = 22    Input2 = 45     Input3 = 60     Output = The Largest Value  is 60
//  Input 1 = 24    Input2 = 0      Input3 = 8      Output = The Largest Value  is 24
//
//////////////////////////////////////////////////////////////////////////////////////
