// find sum of first n natural nos, using recursion.

#include<stdio.h>
int sum(int n);

int main(){
    int num;
    printf("Enter a natura no: ");
    scanf("%d", &num);

    printf("Sum of 1st %d natural nos. is: %d \n", num, sum(num));

    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }

    int sumNm1 = sum(n-1); // sum of 1 to n-1
    int sumN = sumNm1 + n;
    return sumN;

}
