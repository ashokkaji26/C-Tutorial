// keep taking nos. as input from user until user enters an odd no.

#include<stdio.h>

int main(){
    int n;
    
    while(n%2 == 0){
        printf("Enter a no: ");
        scanf("%d", &n);
        if(n%2 != 0){
            break;       // break is used to take us out of loop .
        }
    }
    printf("End\nYou entered an odd no.\n");
    return 0;

}