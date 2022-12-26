#include <stdio.h>

void main()
{
    int num,rev = 0;
    printf("Enter the number to be reversed : \n");
    scanf("%d", &num);
    while(num!= 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num/10;
    }
    printf("Reversed number is %d ",rev);
}