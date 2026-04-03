#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int iSize)      
{
  int iCnt = 0;
  int iSum = 0;
  for(iCnt = 0; iCnt<iSize; iCnt++)
  {
    iSum =  iSum + Arr[iCnt];
  }

  return iSum;
}

int main()
{
  int iLength = 0, iCnt = 0, iRet =0;
  int *ptr = NULL;

  printf("Enter Number of elements :\n");
  scanf("%d", &iLength);

  ptr = (int*)malloc(iLength * sizeof (int));
  if(NULL == ptr)  // Industrial way of coding.
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter the elements:\n");
  for(iCnt = 0; iCnt<iLength; iCnt++)
  {
    scanf("%d", &ptr[iCnt]);
  }

  iRet= Sumation(ptr, iLength);

  printf("Summation is :%d\n",iRet);

  free(ptr);

  return 0;
}