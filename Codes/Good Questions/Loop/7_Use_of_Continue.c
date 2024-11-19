// Print all nos. from 1 to n, except 6.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i == 6){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}