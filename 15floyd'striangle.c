#include <stdio.h>
int main()
{
  int a,i,b,c=1;
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &a);
  for (i=1;i<=a;i++)
  {
  for (b=1;b<= i;b++)
  {
  printf("%d",c); // Please note space after %d
  c++;
  }
  printf("\n");
  }
  return 0;
}