//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Display
//  Description   - This Function display number which is even and Divisible
//                  by 5
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2==0) && (Arr[iCnt]%5 == 0))
        {
           printf("%d\t", Arr[iCnt]);
        }
        
    }

}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,  iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt= 0; iCnt<iSize; iCnt++)
    {
        printf("Enter the element: %d\n",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 20,30,43,80   Output -  20  80        
//  Input1 -   4    Input2 - 12,11,5,50    Output -  0           
//                
////////////////////////////////////////////////////////////////////////////