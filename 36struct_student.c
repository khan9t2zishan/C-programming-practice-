//program to print student data using structure.
#include<stdio.h>
struct student
{
    int Rollno;
    char Name[100];
    int Rank;
    float Percentage;
};
void main()
{
    struct student C1;
    printf("Enter Roll no.,Name,Rank and Percentage of the student: ");
    scanf("%d",&C1.Rollno);
    fflush(stdin);
    gets(C1.Name);
    scanf("%d",&C1.Rank);
    scanf("%f",&C1.Percentage);
    printf("\nSTUDENT DETAILS:\n Roll no: %d \n Name: %s \n Rank: %d \n Percentage: %f",C1.Rollno,C1.Name,C1.Rank,C1.Percentage);
}