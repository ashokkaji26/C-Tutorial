//Print reverse of the table for a given no.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    for(int i = 10; i>=1; i--){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}