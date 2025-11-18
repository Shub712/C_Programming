//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Check
//  Description   - This Function tells if 11 is present in the list or not
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 15/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0; bool bFlag = false;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag = true;
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
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = 0 ;

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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is Not present\n");
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 12,22,43   Output -  11 is not present         
//  Input1 -   4    Input2 - 12,11,5,80  Output - 11 is present         
//                
////////////////////////////////////////////////////////////////////////////