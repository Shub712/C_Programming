//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name - Difference
//  Description   - This Function display Difference between maximum and minimum 
//  Input         - Integer
//  Output        - Interger(To show on console)
//  Author        - Shubham Kiran Pawar
//  Date          - 18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0 , iMin = 0, iMax = 0;

    for(iMin= Arr[0],iMax = Arr[0],iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return (iMax - iMin);
    

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

    iRet = Difference(p,iSize);

    printf("The Difference is : %d", iRet);

    free(p);

    return 0;
} 

/////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//  
//  Input1 -   3    Input2 - 10,20,30    Output -  20         
//  Input1 -   4    Input2 - 10,20,30,80  Output -  70        
//                
////////////////////////////////////////////////////////////////////////////