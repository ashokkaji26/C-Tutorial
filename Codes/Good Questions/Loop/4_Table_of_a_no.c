// Print the table of a no. input by user.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    printf("\nThe table of %d is: \n\n", n);
    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d \n",n, i, n*i);
    }
    return 0;
}