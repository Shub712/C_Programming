//////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////


#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = Percentage
//  Description = It is use to calculate percentage
//  Input =  Integer, Intefer
//  Output = Float
//  Author = Shubham Kiran Pawar
//  Date = 28/10/2025
//////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    if(iNo1 == 0)
    {
        printf("Cannot put zero;\n");           //Business Logic

        return 0.0f;
    }

    fAns = ((float)iNo2 / iNo1) * 100;

    return fAns;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2=0;

    float fRet = 0.0f;

    printf("Please Enter Total Marks:\n");
    scanf("%d", &iValue1);

    printf("Please Enter Obtained Marks:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("The Percentage is : %f",fRet );

    return 0;

}


//////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 - 1000   Input2 - 745    Output - 74.5%
//  Input1 - 1000   Input2 - 800    Output - 80.00000%
//  Input1 - 500    Input2 - 250    Output - 50.00000%
//
//////////////////////////////////////////////////////////////