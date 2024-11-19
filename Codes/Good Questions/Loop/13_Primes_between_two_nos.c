// print all the prime nos between 2 and n.

#include<stdio.h>

int primeOrNot(int n){
    int isPrime = 1;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = 0;
            return isPrime;
        }
    }
    return isPrime;
}

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    for(int i = 2; i<=n; i++){
        int yesOrNo = primeOrNot(i);
        if(yesOrNo == 0){   // if no is prime then skip. 
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}