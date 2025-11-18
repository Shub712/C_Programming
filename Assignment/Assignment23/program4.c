//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Range
//  Description   - This Function display the range between two numbers
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////


void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>=iNo1 && Arr[iCnt]<=iNo2)
        {
            printf("%d  ", Arr[iCnt]);
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
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;
    
    printf("Enter The Number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter Starting Point: \n");
    scanf("%d", &iStart);

    printf("Enter Ending Point: \n");
    scanf("%d", &iEnd);
    
    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to locate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter The  element :%d", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iStart, iEnd);

    return 0;
}