////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description :   Used to give the first index of the character
//  Input   :       String
//  Output  :       integer(To display on console)
//  Author  :       Shubham Kiran Pawar
//  Date    :       4/12/2025
//
///////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iIndex  = 0;



    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }

        str++;
        iIndex++;
    }
    return -1;

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

    iRet = FirstChar(Arr,cValue);

    printf("Character location is : %d\n", iRet);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
// 
//  Input1 :  Shubham       Input2 : m        Ouput : Character location is 6
//  Input :   Pawar         Input2 : 0        Output : Character location is -1
//
// 
//////////////////////////////////////////////////////////////////////////////////
