////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyToggle
//  Description :   It used to convert the small characters into capital 
//                  characters and capital characters into small
//  Input   :       String
//  Output  :       String(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       4/12/2025
//
///////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *str, char *dest)   
{   
 

    while(*str != '\0')
    {
        if(*str >= 'A' && *str<= 'Z')
        {
            *dest = (*str + 32);
        }
        else if(*str >= 'a' && *str<= 'z')
        {
            *dest = (*str - 32);
        }
        else
        {
            *dest = *str;
        }
        dest++;
        str++;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30] = {'\0'};

    StrCpyToggle(Arr, Brr);
    printf("%s\n", Brr);  

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input1 :  Marverllous Python       Output : mARVELLOUS pYTHON  
//
//
// 
//////////////////////////////////////////////////////////////////////////////////