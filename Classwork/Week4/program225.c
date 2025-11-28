#include<stdio.h>

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch)) 
        {
            iCount++;
        }
        str++;
    }   

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter The Character : \n");
    scanf(" %c", &cValue);                      // Intial space will work for all OS

    iRet = CountOccurance(Arr,cValue);
    printf("Count of Occurances are : %d\n", iRet);

    return 0;
}