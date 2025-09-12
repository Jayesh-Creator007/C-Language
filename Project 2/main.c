#include <stdio.h>
int main(){
    float a;
    printf("Enter your persentage:");
    scanf("%f",&a);
    if(a>100){
        printf("Enter persentage Between 1-100");
    }else if(a>80){
        printf("Excellent work");
    }else if(a>60){
        printf("well done");
    }else if(a>50){
        printf("Good job");
    }else if(a>40){
        printf("You passed,but you could do better");
    }else{
        printf("Sorry,you failed");
    }
    return 0;
}