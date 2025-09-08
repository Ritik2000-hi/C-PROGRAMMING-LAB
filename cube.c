# include<stdio.h>

int main(){
    int number;
    printf("enter number");
    scanf("%d", &number);

    int cube;
    cube = number * number * number;
    
    printf("cube is %d", cube);
    return 0;
    
}