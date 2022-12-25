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

//method-2
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b;
    printf("Enter the no. :");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
      a=pow(-1,(b-1))*b*b;
      printf("  %d",a);
    }
    return 0;
}
*/