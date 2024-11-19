
//WAP to check if a given number is a armstrong no. or not??

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, count = 0, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Count the number of digits
    while (originalNum > 0) {
        originalNum /= 10;
        count++;
    }

    originalNum = num; // Reset originalNum to the original number

    // Calculate the sum of the digits raised to the power of count
    while (originalNum > 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, count);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        printf("Given number is an Armstrong number.\n");
    } else {
        printf("Given number is not an Armstrong number.\n");
    }

    return 0;
}