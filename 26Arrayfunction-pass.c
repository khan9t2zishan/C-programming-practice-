
#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("no. of rows and columns:");
    scanf("%d %d",&m,&n);
int A[m][n];
    printf("elements for the matrix A:");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&A[i][j]);
    }
    }
    printf("Matrix A:\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    printf(" %d ",A[i][j]);
    }
    printf("\n");
    }
int B[m][n];
    printf("elements for the matrix B:");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&B[i][j]);
    }
    }
    printf("Matrix B:\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    printf(" %d ",B[i][j]);
    }
    printf("\n");
    }
int C[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
C[i][j]=A[i][j]+B[i][j];
}
printf("Matrix C:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",C[i][j]);
}
printf("\n");
}
}