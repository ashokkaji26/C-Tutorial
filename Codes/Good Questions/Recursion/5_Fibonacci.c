// Write a function to print nth term of the fibonacci sequence.
#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    printf("%dth fibonacci is: %d \n", n, fibonacci(n));

    return 0;
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n== 1){
        return 1;
    }
    int fiboNm1 = fibonacci(n-1);
    int fiboNm2 = fibonacci(n-2);
    int fiboN = fiboNm1 + fiboNm2;
    return fiboN;
}