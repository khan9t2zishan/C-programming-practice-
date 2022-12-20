#include<stdio.h>
void main()
{
    sum();                //Declaration(local)
}

sum()                    //Defination
{
    int a,b,c;
    printf("ENTER THE VALUE OF TWO NUMBERS:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
}