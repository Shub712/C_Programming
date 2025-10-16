
#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt<= iNo; iCnt++) 
   {  
     if((iCnt % 2) == 0)    // % (Divided by 2)
     {
        printf("%d\t",iCnt);
     }  
    
   }

    printf("\n");

}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Please enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}