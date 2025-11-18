//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Maximum
//  Description   - This Function display maximum number 
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0 , iMax = 0;

    for(iMax = Arr[0],iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(p,iSize);

    printf("The Maximum number is : %d", iRet);

    free(p);

    return 0;
} 

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43    Output -  43         
//  Input1 -   4    Input2 - 12,11,5,80  Output -  80         
//                
////////////////////////////////////////////////////////////////////////////