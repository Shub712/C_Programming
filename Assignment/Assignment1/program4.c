//////////////////////////////////////////////////////////////
//
//  Required Header File 
//
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function Name = Check
//  Description = It will check the number is divisible by 5 or not.
//  Input = Integer
//  Output = True Or False (Boolean)
//  Author = Shubham Kiran Pawar
//  Date = 17/10/2025
//////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5)==0)                                        // Business Logic
    {
        return true;
    }
    else                        
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter The Number :\n");
    scanf("%d", &iValue);
    
    bRet = Check(iValue);
    
    if(bRet == true)
    {
        printf("It is Divisible by 5\n");

    }
    else
    {
        printf("It not divisible by 5\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////
// Testcases Successfully Handled By the application
//
// Input1 : 10          Output : It is divisible by 5
// Input2 : 15          Output : It is divisible by 5 
// Input3 : 3           Output : It is not divisible by 5  
// 
//////////////////////////////////////////////////////////////