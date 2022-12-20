#include<stdio.h>
void main()
{
    int choice;
    printf("\n1.sum");
    printf("\n2.sub");
    printf("\n3.mul");
    printf("\n4.div");
    printf("\n5.per");

    printf("\n\n Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1: sum();
            break;
    case 2: sub();
            break;
    case 3: mul();
            break;
    case 4: div();
            break;
    case 5: per();
            break;
    }

}
sum()
{
    int a,b,c;
    printf("\n Input values of a AND b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
}

sub()
{
    int a,b,c;
    printf("\nInput values of a AND b:");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("%d",c);
}

div()
{
    int a,b,c;
    printf("\nInput values of a AND b:");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("%d",c);
}

mul()
{
 int a,b,c;
    printf("\nInput values of a AND b:");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d",c);
}

per()
{
 int a,b,c;
    printf("\nInput values of a AND b:");
    scanf("%d %d",&a,&b);
    c=a%b;
    printf("%d",c);
}
