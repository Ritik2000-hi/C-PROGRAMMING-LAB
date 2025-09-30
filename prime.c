#include <stdio.h>

int main()
{ int a;
    printf("Enter number :");
    scanf("%d",&a);
    int c = 0;
    for (int i = 1 ; i<= a; i++)
    {
        if (a%i==0)
        {
            c += 1;
        }
    }
    if (c==2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}