// Print the sum of first n natural numbers.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

// for loop:- 

    // int sum = 0;
    // for(int i = 1; i<=n; i++){
    //     sum += i;
    // }
    // printf("The sum of 1st %d natural nos. is: %d \n", n, sum);


// While loop:- 

    // int i = 1;
    // int sum = 0;
    // while(i<=n){
    //     sum += i;
    //     i++;
    // }
    // printf("The sum of 1st %d natural nos. is: %d \n", n, sum);

// do while loop:- 

    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while(i<=n);
    printf("The sum of 1st %d natural nos. is: %d \n", n, sum);


    return 0;
}