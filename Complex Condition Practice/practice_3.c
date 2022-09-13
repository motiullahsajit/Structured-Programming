/*
This program will take input a number and will show output based on condition
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int number; //variable declaration

    printf("Please enter the value of m: ");
    scanf("%d",&number);

    if(number > 0){
        printf("The value of n is 1");
    }else if (number < 0){
        printf("The value of n is -1");
    }else if(number == 0){
       printf("The value of n is 0");
    }else{
    printf("Your input is invalid");
    }

    return 0;
};
