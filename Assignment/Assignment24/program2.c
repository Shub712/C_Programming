//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Minimum
//  Description   - This Function display minimum number 
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0 , iMin = 0;

    for(iMin = Arr[0],iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(p,iSize);

    printf("The Minimum number is : %d", iRet);

    free(p);

    return 0;
} 

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43    Output -  12         
//  Input1 -   4    Input2 - 12,11,5,80  Output -  5        
//                
////////////////////////////////////////////////////////////////////////////