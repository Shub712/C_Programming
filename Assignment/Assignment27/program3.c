////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Function is use to display the Pattern  
//  Input   :       Integer
//  Output  :       *(pattern)
//  Author  :       Shubham Kiran Pawar
//  Date    :       21/11/2025
//
////////////////////////////////////////////////////////////////////////

 void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

       
         for(i = 1; i<=iRow; i++)
        {
            for(j=iCol; j>=1; j--)
            {
                printf(j+"\t");                // Business Logic
            }

            printf("\n");
        }
    }

////////////////////////////////////////////////////////////////////////
//
//  Enrty point function of a application
//
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2=0;

    printf("Enter The Number Of Rows :\n");
    scanf("%d", &iValue1); 

    printf("Enter The Number Of Column :\n");
    scanf("%d", &iValue2); 

    Display(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//  
//  Test Cases  :
//  
//  Input1 : 4      Input2 : 3       Output :     *	   *   *	
//                                                *    *   *	
//                                                *	   *   *	   
// 
//
//////////////////////////////////////////////////////////////////////////////////