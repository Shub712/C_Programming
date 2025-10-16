/*
    Step 1:  Understand the problwm statement
    Step 2:  Write thr alorithm
    Step 3:  Decide the programming language
    Step 4:  Write the program
    Step 5:  Test the program

*/

/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        If the input is negative then convert it into positive
        Perform Addition of No1 & No2
        Display the Addition on screen
    STOP
*/


//////////////////////////////////////////////////////////////
//
// Required Header Files
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform adiition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Shubham Kiran Pawar
//  Date :          09/10/2025
//
//
//////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f ;

    //Updater
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    
    //Updater
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2 ; //Business Logic
    return fSum;
}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2= 0.0f, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is :%f\n",fRet);

    return 0;
}

//////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 10.5        Input2 : 3.2        Output : 13.7
// Input1 : -10.5       Input2 : 3.2        Output : 13.7  
// Input1 : 10.5        Input2 : -3.2       Output : 13.7  
// Input1 : -10.5       Input2 : -3.2       Output : 13.7  
// Input1 : 10.5        Input2 : 0.0        Output : 13.7  
//
//////////////////////////////////////////////////////////////

