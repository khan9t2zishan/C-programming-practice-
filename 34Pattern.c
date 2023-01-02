/*Program to print any word in following pattern: (hello)
h 
h e 
h e l 
h e l l 
h e l l o */
#include<stdio.h>
#include<string.h>
void main()
{
    char A[100];
    printf("Enter the word:");
    gets(A);
    for(int i=0;A[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" %c",A[j]);
        }
        printf("\n");
    }  
}