#include<stdio.h>
int main(){
    float BMI;
    printf("Enter your BMI:");
    scanf("%f",&BMI);
    if(BMI<15){
        printf("you fall in starvation");
    }
    else if(BMI>=15 && BMI<=17.5){
        printf("you fall in anorexic");
    }
    else if(BMI>17.5 && BMI<=18.5){
        printf("you fall in underweight");
    }
    else if(BMI>18.5 && BMI<=24.9){
    printf("you fall in ideal");
    }
    else if(BMI>24.9 && BMI<=25.9){
    printf("you fall in overweight");
    }
    else if(BMI>25.9 && BMI<=39.9){
    printf("you fall in obese");
    }
    else{
    printf("you fall in morbidity obese");
    }


    return 0;
}
