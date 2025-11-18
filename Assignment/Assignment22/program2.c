//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Frequency
//  Description   - This Function gives the difference between even elements
//                  and odd elements
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 15/11/2025
//
////////////////////////////////////////////////////////////////////////////


int Frequency( int Arr[], int iLength )
{
    int iCnt = 0, iEven =0, iOdd = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEven ++;
        }

        else
        {
            iOdd ++;
        }
    }

    return (iEven - iOdd);
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

    iRet = Frequency(iPtr, iSize);

    printf("The difference is : %d", iRet);

    free(iPtr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43   Output - The Difference is 1          
//  Input1 -   4    Input2 - 12,4,5,80  Output - The Difference is 3          
//                
////////////////////////////////////////////////////////////////////////////