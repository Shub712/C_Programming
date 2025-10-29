///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name = Display
//  Description = It is use to display number in words.
//  Input =  Integer
//  Output = String
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo; 
    }
    if (iNo>9)
    {
        printf("Invalid Input\n");
    }

    switch (iNo)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:                                                             // Business Logic
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    
  
    }

}

// Time Complexity = O(N)

/////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
////////////////////////////////////////////////////////////////////////////



int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input -  4      Output -    Four	
//  Input -  10     Output -    Invalid Input
//  Input - -3      Output -    Three
//  
//
////////////////////////////////////////////////////////////////////////////