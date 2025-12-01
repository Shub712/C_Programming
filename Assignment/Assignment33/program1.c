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
//  Function Name : chkAlpha
//  Description :   Used to tell if input is character or not  
//  Input   :       Character
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
////////////////////////////////////////////////////////////////////////

BOOL chkAlpha(char ch)
{
    if(ch>= 'a' && ch<='z')
    {
        return TRUE;
    }
    else if(ch>='A'&& ch<='Z')
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

    bRet = chkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : A      Ouput : "It is a Character"
//  Input :  a      Ouput : "It is a Character"
//  Input :  &      Ouput : "It is not a Character"
//
//////////////////////////////////////////////////////////////////////////////////