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
//  Input   :       Chracter
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL chkSmall(char ch)
{
    if(ch>='a'&& ch<='z')
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

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = chkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("It is a small character\n");
    }
    else
    {
        printf("It is not a small character\n");
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : A      Ouput : "It is a not small Character"
//  Input :  a      Ouput : "It is a small Character"
//  Input :  &      Ouput : "It is not a small Character"
//
//////////////////////////////////////////////////////////////////////////////////