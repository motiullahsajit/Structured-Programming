
/*
A C program that can calculate BMI and show BMI Weight Status

Author : Motiullah Sajit
*/


#include<stdio.h>

int main(){

    float height, weight, bmi;

    printf("Please enter your height in cm: ");
    scanf("%f",&height);

    printf("Please enter your weight in kg: ");
    scanf("%f",&weight);

    bmi = weight / ((height/100)*(height/100));

    if(bmi <18.5){
        printf("Your BMI is %.2f and BMI Weight Status is Underweight",bmi);
    }else if(bmi >= 18.5 && bmi <= 24.99){
        printf("Your BMI is %.2f and BMI Weight Status is Normal or Healthy Weight",bmi);
    }else if(bmi >=25 && bmi <= 29.99 ){
        printf("Your BMI is %.2f and BMI Weight Status is Overweight",bmi);
    }else if(bmi>30){
        printf("Your BMI is %.2f and BMI Weight Status is Obese",bmi);
    }


    return 0;
}
