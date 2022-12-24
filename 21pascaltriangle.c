#include<stdio.h>
void main()
{
    int rows,i,j,space,a=1;
 printf("Enter the row for pascal triangle: ");
 scanf("%d",&rows);                                 //Enter number of rows to print pascal triangle
 i=0;
 while(i<rows)

 {                                                  //outer while loop  to print space for every line
   space=1;
   while( space<=rows-i){
   printf("  ");//print space
  space++;
   }
j=0;
   while( j<=i)
   {                                                //inner while loop for print pascal triangle
   if(j==0 || i==0)
    a=1;
   else
     a=a*(i-j+1)/j;
     printf("%4d",a);                               //print pascal triangle
      j++;
   }
   printf("\n");                                    //move to next line
i++;
}
}