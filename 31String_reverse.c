//program to reverse a string
#include<stdio.h>
#include<string.h>
void main()
{
    int m;
    printf("Size of the array:");
    scanf("%d",&m);
    char A[m];
    printf("Enter the string:");
    scanf("%s",A);
    strrev(A);
    printf("%s",A);
}