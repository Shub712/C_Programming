//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Check
//  Description   - This Function tells if number is present in the list or not
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;
    
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag = TRUE;
            break;        
        }
    }

    return bFlag;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet =0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet =  FALSE;

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
        printf("Enter Element : %d\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter The Number : \n");
    scanf("%d", &iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet==TRUE)
    {
        printf("%d Number is Present ", iValue);
    }

    else
    {
        printf("%d Number is Not Present ", iValue);   
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43   Input3 -  22    Output -  22 is  present         
//  Input1 -   4    Input2 - 12,11,5,80 Input4 -  67    Output - 67 is not present         
//                
////////////////////////////////////////////////////////////////////////////