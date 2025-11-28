#include<stdio.h>

int CountNonFactors(int iNo)
{
  int iCnt = 0, iFrequency = 0;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt < iNo; iCnt ++)     // Condition will travel till the iNo. 
  {
    if((iNo % iCnt) != 0)               // != Not equal to 0 
    {
      iFrequency ++ ;
    }
  }

  return iFrequency;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter the number\n");
  scanf("%d", &iValue);

  iRet = CountNonFactors(iValue);

  printf("Number of Non factors : %d\n", iRet);
  
  return 0 ;
}