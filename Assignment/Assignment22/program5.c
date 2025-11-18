//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Frequency
//  Description   - This Function gives the frequency of Anynumber from user
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 15/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount =0 ; 

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }   
        
    }

    return iCount ;
    
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entrypoint function of a program
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    

    printf("Enter The Number Of Elements :\n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to Locate memory :\n");
        return -1;
    }

    printf("Enter %d Elements : \n",iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\t",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter The Number You Want to Check:\n");
    scanf("%d", &iValue);

    iRet = Frequency(p,iSize, iValue);

    printf("The Frequency of %d is: %d ",iValue,iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43       Input3 - 22   Output - 1        
//  Input1 -   4    Input2 - 12,11,5,80     Input3 - 15   Output - 0       
//                
////////////////////////////////////////////////////////////////////////////