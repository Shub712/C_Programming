////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description :   Used to give the frequency of the character
//  Input   :       String
//  Output  :       integer(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       4/12/2025
//
///////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;

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
    int iRet = 0;

    printf("Enter The String : \n");
    scanf("%[^ '\n']s",Arr);

    printf("Enter The Character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Frequency is : %d\n", iRet);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input1 :  Shubhamm      Input2 : m        Ouput : Frequency is 2
//  Input :  Pawar          Input2 : 0        Output : Frequency is 0
//
// 
//////////////////////////////////////////////////////////////////////////////////