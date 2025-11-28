#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
  int iCnt = 0, iFrequency1 = 0, iFrequency2 = 0;    // iFrequency1 will count the factors
                                                     // iFrequency2 will count the non factors
  if(iNo < 0)           // It will handle the negative value condition
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt < iNo; iCnt ++)
  {
    if((iNo % iCnt) == 0)          // % (Mod operator) will give the remainder (Baki)
    {
      iFrequency1 ++ ;
    }
    else
    {
      iFrequency2++;
    }
  }

  printf("Number of factors are : %d\n", iFrequency1);
  printf("Number of Non factors are : %d\n", iFrequency2);

}
// time complexity - O(N)

int main()
{
  int iValue = 0;

  printf("Enter the number\n");
  scanf("%d", &iValue);

  CountFactorsNonFactors(iValue);
  
  return 0 ;
}