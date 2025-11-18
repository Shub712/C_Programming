//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - CountEven
//  Description   - This Function gives the count of even elements of an array
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 15/11/2025
//
////////////////////////////////////////////////////////////////////////////


int CountEven( int Arr[], int iLength )
{
    int iCnt = 0, iCount =0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iCount ++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet =0, iCnt =0;
    int *iPtr = NULL;

    printf("Enter Number Of elements : \n");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL==iPtr)
    {
        printf("Unable to locate memory\n");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for(iCnt =0 ; iCnt<iSize; iCnt++)
    {
        printf("Enter the elements: %d\t", iCnt+1);
        scanf("%d", &iPtr[iCnt]);
    }   

    iRet = CountEven(iPtr, iSize);

    printf("The result is : %d", iRet);

    free(iPtr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43   Output - 2          
//  Input1 -   4    Input2 - 12,4,5,80  Output - 3          
//                
////////////////////////////////////////////////////////////////////////////