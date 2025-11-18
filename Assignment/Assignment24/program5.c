//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - DigitsSum
//  Description   - This Function display Sum of each number
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 18/11/2025
//
////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iNo = 0;

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;
        
        while(iNo!=0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
    }
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    
    printf("Enter The Number of elements :\n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element: %d\n",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
} 

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 112,230,30     Output -  4  5  30         
//  Input1 -   4    Input2 - 1123,2,344,80  Output -  7  2  11 80        
//                
////////////////////////////////////////////////////////////////////////////