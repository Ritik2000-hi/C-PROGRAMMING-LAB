#include <stdio.h>

int main()
{
    printf("Enter Age :");
    int age ;
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Elegible to vote");
    }
    
    else if (age <0)
    {
        printf("Invalid age");
        
    }
    else
    {
        printf("Not eligible to vote");
    }
    return 0;
}