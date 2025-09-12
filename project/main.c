#include <stdio.h>
int main(){
    float a;
    printf("Enter your persentage:");
    scanf("%f",&a);
    if(a>100){
        printf("Enter persentage");
    }else if(a>90){
        printf("Your grade is A+");
    }else if(a>80){
        printf("Your grade is A");
    }else if(a>70){
        printf("Your grade is B+");
    }else if(a>60){
        printf("Your grade is B");
    }else if(a>50){
        printf("Your grade is C");
    }else if(a>40){
        printf("Your grade is D");
    }else{
        printf("Better luck next time");
    }
    return 0;
}