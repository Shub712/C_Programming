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
//  Description   - This Function gives the frequency of 11
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 15/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount =0 ; 

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    

    printf("Enter The Number Of Elements :\n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to Locate memory :\n");
        return -1;
    }

    printf("Enter %d Elements : ",iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\t",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("The Frequency is : %d \n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43    Output - 0        
//  Input1 -   4    Input2 - 12,11,5,80  Output - 1        
//                
////////////////////////////////////////////////////////////////////////////