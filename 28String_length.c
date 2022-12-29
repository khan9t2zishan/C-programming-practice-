//Program to count string length
#include<stdio.h>
#include<string.h>
void main()
{
    int m;
    printf("Enter the size of the Array:");
    scanf("%d",&m);
    int A[m],i;
    printf("Enter the string:");
    scanf("%s",A);
    printf("%s",A);
    strlen(A);
    printf("\nLength of the string is: %d",strlen(A)); 
}