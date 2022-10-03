
/*
A C program that can convert temperature from degree celcius to farenheit and farenheit to celcius.

Author : Motiullah Sajit
*/


#include<stdio.h>

int main(){

    int userChoice;
    float input;

    printf("1. Celcius to Farenheit\n2. Farenheit to Celcious\nPlease enter your choice: ");
    scanf("%d",&userChoice);

    if(userChoice == 1){
        printf("Enter the temparature in celcius: ");
        scanf("%f",&input);
        printf("%.1f celcius is %.1f farenheit",input,((input*9/5)+32));
    }else if(userChoice == 2){
        printf("Enter the temparature in farenheit: ");
        scanf("%f",&input);
        printf("%.1f farenheit is %.1f celcius",input,((input - 32)*5/9));
    }else{
        printf("Your choice is invalid");
    }



    return 0;
}
