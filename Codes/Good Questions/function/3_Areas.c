// Write functios to calculate areas of circle, rectangle and square.

#include<stdio.h>
float circleArea(float r);
float recArea(float l, float b);
float squareArea(float side);

int main(){

    float r, l, b, side;
    printf("enter radius of circle: ");
    scanf("%f", &r);

    printf("Enter length and breadth of recatangel: ");
    scanf("%f %f", &l, &b);

    printf("Enter side of square: ");
    scanf("%f", &side);

    printf("Area of circle is: %f\n", circleArea(r));
    printf("Area of rectangle is: %f\n", recArea(l,b));
    printf("Area of square is: %f\n", squareArea(side));
    return 0;
}

float circleArea(float r){
    float pi = 3.14;
    float area = pi * r * r;
    return area;
}

float recArea(float l, float b){
    float area = l * b;
    return area;
}

float squareArea(float side){
    float area = side * side;
    return area;
}