#include<stdio.h>

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z')) 
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
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    //fflush(stdin);                  

    iRet = CountSmall(Arr);
    printf("Count of small characters are : %d\n", iRet);

    return 0;
}