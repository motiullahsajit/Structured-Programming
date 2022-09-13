/*
This program will take input a number and decide if the number is positive , negative or neutral
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    float number; //variable declaration

    printf("Please enter the number you want to check: ");
    scanf("%f",&number);

    if(number > 0){
        printf("The number %.2f is a positive number",number);
    }else if (number < 0){
        printf("The number %.2f is a negative number",number);
    }else{
       printf("The number %.2f is a neutral number",number);
    }

    return 0;
};
