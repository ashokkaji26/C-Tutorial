// Keep taking nos as input until user enters a no. which is multiple of 7.

#include<stdio.h>
int main(){
    int n;

    do{
        printf("Enter a no: ");
        scanf("%d", &n);
        if(n%7 == 0){
            break;
        }
    }while(n%7 != 0);
    printf("End, you entered multiple of 7. \n");
    return 0;
}