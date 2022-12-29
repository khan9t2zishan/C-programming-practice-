//program to count words in string
#include<stdio.h>
#include<string.h>
void main()
{
    int m;
    printf("Enter the size of the Array:");
    scanf("%d",&m);
    char A[m];
    printf("Enter the string:");
    scanf("%s",A);
    gets(A);
    puts(A);
    strlen(A);
    printf("\nLength of the string is: %d",strlen(A));
}