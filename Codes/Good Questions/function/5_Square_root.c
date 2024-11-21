//write a function to find square root of a no.
#include <stdio.h>

float squareRoot(float n);

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    printf("Square root: %f\n", squareRoot(n));

    return 0;
}

float squareRoot(float n) {
    float guess = n / 2.0;
    float epsilon = 0.00001; // Precision level

    while ((guess * guess - n) > epsilon || (n - guess * guess) > epsilon) {
        guess = (guess + n / guess) / 2.0;
    }

    return guess;
}