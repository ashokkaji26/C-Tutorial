// Write function to calculate percentage of a student from marks math,science and telugu.

#include<stdio.h>

float percentage(float m, float s, float t);
int main(){
    float m,s,t;
    printf("Enter marks of math, science and telugu: ");
    scanf("%f %f %f", &m, &s, &t);

    printf("percentage of student = %f \n", percentage(m,s,t));

    return 0;
}

float percentage(float m, float s, float t){
    float percentage = ((m + s + t) / 300) * 100;
    return percentage;
}