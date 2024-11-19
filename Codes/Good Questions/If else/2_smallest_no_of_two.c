#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two nos: ");
    scanf("%d %d", &num1, &num2 );

    if(num1<num2){
        printf("The smaller no. is: %d\n",num1);
    }else{
        printf("The smaller no. is: %d\n",num2);
    }
    return 0;
}