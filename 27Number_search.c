#include<stdio.h>
void main()
{
    int i,m,n;
    printf("Enter the size of the array:");
    scanf("%d",&m);
    int A[m];
    printf("Enter the %d elements of the array:",m);
    for(i=0;i<m;i++)
    scanf("%d",&A[i]);
    printf("Array A:\n");
    for(i=1;i<+m;i++)
    printf("%d ",A[i]);
    printf("\nEnter the number you want to search:");
    scanf("%d",&n);
    printf("Number %d found at position:\n",n);
    for(i=0;i<m;i++)
    if(A[i]==n)
    printf("%d ",i);
}