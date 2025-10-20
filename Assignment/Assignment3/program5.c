//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   It is used to check whether letter is a
//                  vowel or not.
//  Input :         Character
//  Output :        String (Boolean)
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////

typedef int BOOl;
#define TRUE 1
#define FALSE 0

BOOl ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I'|| cValue == 'O'
    || cValue == 'U'|| cValue == 'a'|| cValue == 'e'|| cValue == 'i'
    || cValue == 'o'|| cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    BOOl bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel");
    }
    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 'A'    Output : It is a Vowel.	
// Input1 : 'c'    Output : It is not a Vowel.	    	
// Input :  'e'    Output : It is a Vowel  
//////////////////////////////////////////////////////////////