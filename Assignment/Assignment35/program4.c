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
//  Function Name : ChkVowels
//  Description :   Used to check if string contains any vowel in it or not 
//  Input   :       String
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :      1/12/2025
//
///////////////////////////////////////////////////////////////////////

BOOL ChkVowels(char *str)
{
    BOOL ch = FALSE;

    while (*str!='\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' 
        || *str == 'o' || *str == 'u')
        {
            ch = TRUE;
        }
        str++;
    }
    return ch;
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20]={'\0'};

    BOOL bRet = FALSE;

    printf("Enter The string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowels(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels \n");
    }
    else
    {
        printf("Does not contains vowels\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input :  shubham      Ouput : It contains vowel
//  Input :  XYZ          Ouput : It does not contain vowel
//
// 
//////////////////////////////////////////////////////////////////////////////////