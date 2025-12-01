#include<stdio.h>

void strcatX(char *src, char *dest)
{
    while(*dest!='\0')
    {
        *dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        *src++;
        *dest++;
    }
    *dest = '\0';           // It can be written as : *dest = *src;
}

int main()
{   
    char Arr[50]={'\0'};
    char Brr[50]={'\0'};

    printf("Enter The source String ; \n");
    scanf("%[^'\n']s", Arr); 

    printf("Enter The destination String ; \n");
    scanf(" %[^'\n']s", Brr);
    
    strcatX(Arr,Brr);

    printf("updated string is : %s\n", Brr);

    return 0;
}