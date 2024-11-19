// check if a no. is prime or not?

#include<stdio.h>
int main(){
   int n;
   printf("Enter a no: ");
   scanf("%d", &n);
   int isPrime = 1;

//M-1: 
//    for(int i = 2; i<n; i++){
//     if(n%i == 0){
//         isPrime = 0;
//         break;
//     }
//    }
   
//    if(isPrime == 1){
//     printf("Prime no. \n");
//    }else{
//     printf("Non-prime no. \n");
//    }

// M-2: 
for(int i = 2; i*i<=n; i++){
    if(n%i == 0){
        isPrime = 0;
    }
}
if(isPrime ==1){
    printf("Prime no. \n");
}else{
printf("Non-prime no.\n");
}
    return 0;
}