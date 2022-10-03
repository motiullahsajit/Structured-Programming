
/*
A C program that can take input user’s choice, do the calculation and display result.

Author : Motiullah Sajit
*/


#include<stdio.h>

int main(){

    float firstNum, secondNum;
    int userChoice;

    printf("Please insert the first number: ");
    scanf("%f",&firstNum);
    printf("Please insert the second number: ");
    scanf("%f",&secondNum);

    printf("\nWhat do you want to do with the inputted numbers?\n\n1. Calculate the summation\n2. Calculate the subtraction\n3. Calculate the multiplication\n4. Calculate the division\n\nEnter your choice: ");
    scanf("%d",&userChoice);

    if(userChoice == 1){
        printf("The summation of %.2f and %.2f is = %.2f",firstNum, secondNum, (firstNum+secondNum));
    }else if(userChoice == 2){
        printf("The subtraction of %.2f and %.2f is = %.2f",firstNum, secondNum, (firstNum-secondNum));
    }else if(userChoice == 3){
        printf("The multiplication of %.2f and %.2f is = %.2f",firstNum, secondNum, (firstNum*secondNum));
    }else if(userChoice == 4){
        printf("The division of %.2f and %.2f is = %.2f",firstNum, secondNum, (firstNum/secondNum));
    }else{
        printf("Your choice is invalid");
    }



    return 0;
}
