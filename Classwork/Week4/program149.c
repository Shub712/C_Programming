#include<stdio.h>
#include<stdlib.h>


void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p =*q
    *q = temp;
}

int main()
{
   
    int iValue1= 11, iVlaue2=21;

    printf("Before Swap : %d %d\n", iValue1, iVlaue2);

    Swap(&iValue1, &iVlaue2);

    printf("After Swap : %d %d\n", iValue1, iVlaue2);

    return 0;
}