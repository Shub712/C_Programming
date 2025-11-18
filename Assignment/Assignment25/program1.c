//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Difference
//  Description   - This Function gives difference between even and odd number
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iEven = 0, iOdd;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else if(Arr[iCnt]%2 !=0)
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    return (iEven - iOdd);
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt= 0; iCnt<iSize; iCnt++)
    {
        printf("Enter the element: %d\n",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("The Difference is : %d", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43    Output -  -9         
//  Input1 -   4    Input2 - 12,11,5,80  Output -  76            
//                
////////////////////////////////////////////////////////////////////////////