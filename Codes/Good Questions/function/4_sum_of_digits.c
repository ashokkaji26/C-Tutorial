// write a function to calculate sum of digits of a number.

#include<stdio.h>

int sumOfdigits(int num);
int main(){
    int n;
    printf("Ener a no: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is: %d\n", n, sumOfdigits(n));
    return 0;
}

int sumOfdigits(int num){
    int r;
    int sum = 0;

    while(num>0){
        r = num % 10;
        sum = sum + r;
        num /= 10;
    }
    return sum;
}