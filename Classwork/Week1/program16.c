/////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////



#include<stdio.h>                       // For input output
#include<stdbool.h>                     // For Bool data type

/////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description :   It is used to check even or odd number
// Input :         integer
// Output :        Boolean
// Author :        Shubham Kiran Pawar
// Date :          10/10/2025
/////////////////////////////////////////////////////////



bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;  

    if(iRem==0)
    {  return true; }
    else
    {return false;}

}
/////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet==true)
    {printf("%d is Even Number\n",iValue); }
    else
    {printf("%d is Odd Number\n",iValue); }

    return 0;
}
