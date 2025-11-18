//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Product
//  Description   - This Function gives product of all odd numbers
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMult = 1, iOdd = 0;
    
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
           iMult = Arr[iCnt] * iMult; 
           iOdd = 1;       
        }

    }

    if(iOdd == 0)
    {
        return 0;
    }

    return iMult;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter The Number of elements : \n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element : %d\n", iCnt+1);
        scanf("%d", &p[iCnt]);
    }


    iRet = Product(p,iSize);

    printf("The Product of odd numbers is :%d\n", iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43    Output -  43         
//  Input1 -   4    Input2 - 12,11,5,80  Output -  55         
//                
////////////////////////////////////////////////////////////////////////////