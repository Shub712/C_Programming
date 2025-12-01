////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name : chkDigit
//  Description :   Used to tell if input is a Digit or not  
//  Input   :       Digit
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL chkDigit(char ch)
{
    if(ch>='0'&& ch<='9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
   
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the digit : \n");
    scanf("%c",&cValue);

    bRet = chkDigit(cValue);

    if(bRet==TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : A      Ouput : "It is not a digit"
//  Input :  9      Ouput : "It is a digit"
//  Input :  &      Ouput : "It is not a digit"
//
//////////////////////////////////////////////////////////////////////////////////