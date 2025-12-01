#include<stdio.h>

void strrevX(char *Str)
{
    char *End = Str;
    char *Start = Str;

    char temp ='\0';

    while(*End != '\0')
    {
        End++;
    }

    End--;

    while(Start < End)
    {
       temp = *Start;
       *Start = *End;
       *End = temp;

       Start++;
       End--;
    }

}

int main()
{   
    char Arr[50]={'\0'};

    printf("Enter The String ; \n");
    scanf("%[^'\n']s", Arr); 

    strrevX(Arr);

    printf("Updated String is : %s\n", Arr);

    return 0;
}