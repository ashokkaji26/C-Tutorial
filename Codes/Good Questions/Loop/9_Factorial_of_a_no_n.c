// Print the factorial of a no.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int factorial = 1;

    
    for(int i = 1; i<=n; i++){
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}