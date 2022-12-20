#include<stdio.h>
void main()
{
    int t,h,m,s;
    printf("total time in seconds:");
    scanf("%d",&t);
    h=t/3600;
    m=(t-(h*3600))/60;
    s=((t-(h*3600))-(m*60));
    printf("%dhour %dminute %dsecond",h,m,s);
}