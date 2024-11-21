// Write a function to convert celcius to fahrenheight.

#include<stdio.h>

    float celToFah(float cel);

int main(){
    float cel;
    printf("Enter temp is celcius: ");
    scanf("%f", &cel);

    printf("%f celcius in fahrenheight is: %f \n", cel, celToFah(cel));
    
    return 0;
}

float celToFah(float cel){
    float fahrenheight = (cel * 9) / 5 + 32;
    return fahrenheight;
}