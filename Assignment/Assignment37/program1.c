////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description :   Used to check if character is present in the string or not
//  Input   :       String
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       4/12/2025
//
///////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bAns = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bAns = 1;
        }
        str++;
    }
    return bAns;

}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20]= {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The String : \n");
    scanf("%[^ '\n']s",Arr);

    printf("Enter The Character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)    
    {
        printf("Character Found \n");
    }
    else
    {
        printf("Character not found \n");
    }

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input1 :  Shubham   Input2 : h       Ouput : Character Found
//  Input :  Pawar      Input2 : o       Output : character not found
//
// 
//////////////////////////////////////////////////////////////////////////////////