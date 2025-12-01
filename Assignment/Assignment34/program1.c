////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description :   Used to display ASCII table 
//  Input   :       -
//  Output  :       ASCII Table(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       29/11/2025
//
///////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;
    for(iCnt=0; iCnt<=255; iCnt++)
    {
        printf("Dec : %3d Hex: %3x Oct : %3o char : %c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII();
    return 0;
}