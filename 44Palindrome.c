//program to print palindrome number
#include<stdio.h>  
void main()    
{    
int n,reverse=0,rem;    
printf("Enter the number: ");    
  scanf("%d",&n);   
  int a=n; 
  while(n!=0)   
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    // n=n/10
  }    
  printf("Reversed Number: %d",reverse);  
      //int a=n; 
      if(a==reverse)
      printf("\nThe number %d is a palindrome",a);
      else
      printf("\nThe number %d is not a palindrome",a);
}   
