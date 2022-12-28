//maximum and minimum number from an array
#include<stdio.h>
void main()
{
    int m,i;
    printf("Size of the Array A:");
    scanf("%d",&m);
    int A[m];
    printf("Enter the %d elements of the Array:\n",m);
    for(i=0;i<=m;i++)
    scanf("%d",&A[i]);
    printf("Array A:\n");
    for(i=0;i<=m;i++)
    printf("%d ",A[i]);
    int Max=A[0],Min=A[0];
    for(i=1;i<=m;i++)
    {
        if(A[i]>Max)
        {
         Max=A[i];
        }
    }
    for(i=1;i<=m;i++)
    {
        if(A[i]<Min)
        {
          Min=A[i];  
        }  
    }
    printf("\n\nMaximum value:%d",Max);
    printf("\nMinimum value:%d",Min);
}