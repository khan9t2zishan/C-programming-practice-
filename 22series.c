//program to print series 1 -4 9 -16  25  -36
#include<stdio.h>
void main()
{
    int n,i;
    printf("print series upto");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        (i%2!=0)?printf("\t%d",i*i):printf("\t%d",-i*i);
    }
}