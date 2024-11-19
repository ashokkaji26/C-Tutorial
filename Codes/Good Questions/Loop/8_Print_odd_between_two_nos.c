// Print all odd nos. from 5 to n.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

//M-1 : normal
    // for(int i = 5; i<=n; i++){
    //     if(i%2==1){
    //         printf("%d \n", i);
    //     }
    // }

//M-2: using continue statement
    for(int i = 5; i<=n; i++){
        if(i%2 == 0){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}