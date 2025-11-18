//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - FirstOcc
//  Description   - This Function tells Last occurance of number
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 16/11/2025
//
////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iAns = -1;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iAns = iCnt;
        }
        
    }

    return iAns;
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

    printf("Enter The Number : \n");
    scanf("%d", &iValue);

    iRet = LastOcc(p,iSize,iValue);

    printf("The Last Occurance on :%d\n", iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43,22   Input3 -  22    Output -  3         
//  Input1 -   4    Input2 - 12,11,5,80    Input4 -  67    Output - -1         
//                
////////////////////////////////////////////////////////////////////////////