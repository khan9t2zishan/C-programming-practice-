//program to print the transpose of a matrix
#include<stdio.h>
void main()
{
    int i,j,m,n,A[100][100];
    printf("no. of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("elements for the matrix:");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&A[i][j]);
    }
    }
    printf("Matrix:\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    printf(" %d ",A[i][j]);
    }
    printf("\n");
    }
    printf("Transpose:\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    printf(" %d ",A[j][i]);
    }
    printf("\n");
    }
}
