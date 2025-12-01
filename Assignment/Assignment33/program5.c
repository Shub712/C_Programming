////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

    ////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : DisplaySchedule
    //  Description :   Used to tell exam timing of a division  
    //  Input   :       Chracter
    //  Output  :       String(To display on console)
    //  Author  :       Shubham Kiran Pawar
    //  Date    :       29/11/2025
    //
    ////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if(ch=='A')
    {
        printf("Your Exam is at : 7 AM\n");
    }
    else if(ch=='B')
    {
        printf("Your Exam is at : 8.30 AM\n");
    }
    else if(ch=='C')
    {
        printf("Your Exam is at : 9.30 AM\n");
    }
    else if(ch=='D')
    {
        printf("Your Exam is at : 10.30 AM\n");
    }
    else
    {
        printf("Invalid Input please write correct division \n");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : A      Ouput : "Your Exam is at : 7 AM"
//  Input :  B      Ouput : "Your Exam is at : 8.30 AM"
//  Input :  &      Ouput : "Invalid Input please write correct division"
//
//////////////////////////////////////////////////////////////////////////////////