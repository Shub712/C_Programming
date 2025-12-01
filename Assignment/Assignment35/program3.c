////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Used to give difference between capital and small characters
//  Input   :       String
//  Output  :       Integer(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :      1/12/2025
//
///////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt = 0, iCountCapital = 0, iCountSmall = 0;

    while (*str!='\0')
    {
        if(*str >= 'a' && *str<='z')
        { 
            iCountSmall++;
        }
        else if(*str >= 'A' && *str<='Z')
        {
            iCountCapital++;
        }
        str++;
    }
    return (iCountSmall-iCountCapital);    
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20]={'\0'};
    int iRet = 0;

    printf("Enter The String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("The Difference is : %d\n",iRet);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input :  shubham      Ouput : The Difference is 5
// 
//////////////////////////////////////////////////////////////////////////////////