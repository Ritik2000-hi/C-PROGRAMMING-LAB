#include <stdio.h>

int main()
{ int n;
    printf("Enter number :");
    scanf("%d",&n);
    int i = 1;
    int f= 1;
    while(i<=n)
    {
        f=f * i;
        i++;
    }
    printf("The factorial of %d is %d ", n,f);
    return 0;
}