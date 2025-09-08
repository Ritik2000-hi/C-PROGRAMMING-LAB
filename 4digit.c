# include<stdio.h>

int main(){
    int num, sum = 0;
    printf("enter a four digit integer");
    scanf("%d", &num);
    sum = sum + (num % 10);
    num = num / 10; 
    sum = sum + (num %10);
    num = num / 10;
    sum = sum + (num %10);
    num = num / 10;
    sum = sum + (num %10);
    printf("the sum of the digits is %d", sum);
    return 0;
  
}
