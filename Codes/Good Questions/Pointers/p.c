#include<stdio.h>

int main(){
    int age = 40;
    int *ptr = &age;

    printf("%u\n", &age);
    printf("%u\n", ptr);
    return 0;
}