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
//  Function Name : chkCapital
//  Description :   Used to tell if the character is capital or not  
//  Input   :       Character
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL chkCapital(char ch)
{
    if(ch>='A'&& ch<='Z')
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

    bRet = chkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a  capital character\n");
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : A      Ouput : "It is a Capital Character"
//  Input :  a      Ouput : "It is a not a capital Character"
//  Input :  &      Ouput : "It is not a capital Character"
//
//////////////////////////////////////////////////////////////////////////////////