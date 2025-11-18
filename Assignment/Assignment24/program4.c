//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Digits
//  Description   - This Function display digits between 100 and 999
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 18/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0 ;

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>100 && Arr[iCnt]<999)
        {
            printf("%d\t",Arr[iCnt]);
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

    Digits(p,iSize);

    free(p);

    return 0;
} 

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 112,230,30     Output -  112, 230         
//  Input1 -   4    Input2 - 1123,2,344,80  Output -  344        
//                
////////////////////////////////////////////////////////////////////////////