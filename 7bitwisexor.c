#include<stdio.h>
void main()
{
    int x,y;
    printf("input of x and y:");
    scanf("%d %d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d",x,y);
}