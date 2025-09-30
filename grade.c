#include<stdio.h>
int main()
{
    printf("Enter marks  :");
    int marks ;
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
    printf("A grade");
    else if (marks>=75 && marks<90)
    printf("B grade");
    else if (marks>=50 && marks<75)
    printf("C grade");
    else 
    printf("F grade");
    return 0;
}