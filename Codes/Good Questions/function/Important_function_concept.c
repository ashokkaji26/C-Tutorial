#include<stdio.h>
#include<math.h>

int main(){
    int n = 4;
    printf("%d", pow(n,2));      // it will generate an error, because of the format specifier.
    printf("%d\n", (int)pow(n,2));   // type converstion( double to int)
    printf("%f", pow(n,2));
    return 0;
}