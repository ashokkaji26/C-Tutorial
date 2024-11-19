// Print the sum of first n natural nos. and also print them in reverse.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    int sum = 0;

    //Method - 1
    // We can initialize multiple variables in a loop.
    // for(int i = 1, j = n; i<=n && j>=1; i++, j--){

    //     printf("%d \n", j);
    //     sum += i;
    // }
    // printf("The sum of first %d natural nos. is: %d \n",n, sum);

    // Method- 2
    for(int i = n; i>=1; i--){
        printf("%d \n", i);
        sum += i;
    }
    printf("The sum of first %d natural nos. is: %d \n",n, sum);
    
    return 0;
}