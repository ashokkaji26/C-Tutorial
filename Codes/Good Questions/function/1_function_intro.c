#include<stdio.h>

void printHello();  // function prototype
int main(){

    printHello(); // function call
    printHello();
    return 0;
}

void printHello(){     // function definition
    printf("Hello \n");
    return;
}