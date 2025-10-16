

#include<stdio.h>
#include<stdbool.h>


void DisplayNonFactors(int iNo)
{
  int iCnt = 0 ;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt=1; iCnt<iNo; iCnt ++)
  {
    if((iNo % iCnt) != 0)   //!= Not equal to
    {
      printf("%d\n", iCnt);
    }
  }
  
  
}

// time complexity = O(N)

int main()
{
  int iValue = 0;

  printf("Enter Number : \n");
  scanf("%d", &iValue);
  
  DisplayNonFactors(iValue);
  
  return 0;
}