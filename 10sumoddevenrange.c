#include<stdio.h>
void main()
{
    int i,a,b,se=0,so=0;      //se-sum of even numbers; so-sum of odd numbers;
    printf("range a to b:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
    {
        se=se+i;
  	}
  	else
  	{
  		so=so+i;
    }
    }
  printf("sum of odd numbers between %d to %d=%d",a,b,so);
  printf("\nsum of even numbers between %d to %d=%d",a,b,se);
 
}
                
