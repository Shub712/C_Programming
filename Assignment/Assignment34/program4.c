////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name : chkSpecial
//  Description :   Used to check if character is special or not
//  Input   :       character
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
///////////////////////////////////////////////////////////////////////

BOOL chkSpecial(char ch)
{
    if( ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        return  TRUE;
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
    char cValue ='\0';
    BOOL bRet = FALSE;
    
    printf("Enter The Chracter : \n");
    scanf("%c",&cValue);

    bRet = chkSpecial(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is a Special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : $      Ouput :  It is a special chracter
//  Input :  d      Ouput :  It is not a special character
//  Input :  %      Ouput :  It is a special chracter
//
//////////////////////////////////////////////////////////////////////////////////