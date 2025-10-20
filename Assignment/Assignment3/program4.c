//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConver
//  Description :   It is used to convert Capital letter
//                  to small letter and small letter to captial letter
//  Input :         Character
//  Output :        Character
//  Author :        Shubham Kiran Pawar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////


char DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue<= 'Z')
    {
        printf("%c",cValue + 32);
    }
    else(cValue >= 'a' && cValue <= 'z');
    {
        printf("%c",cValue -32);
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

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 'A'    Output : 'a'	
// Input1 : 'c'    Output : 'C'	    	
// Input :  'Z'    Output : 'z'    
//////////////////////////////////////////////////////////////