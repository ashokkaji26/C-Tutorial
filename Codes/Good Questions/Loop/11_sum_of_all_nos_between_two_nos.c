// calculate the sum of all nos. between 5 and n including 5 and n.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 5; i<=n; i++){
        sum +=i;
    }
    printf("Total sum is: %d\n", sum);
    return 0;
}