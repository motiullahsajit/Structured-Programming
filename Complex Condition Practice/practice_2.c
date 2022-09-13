/*
A program to take user menu choice
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){
    int userChoice;

    printf("Item's List \n 1) Fried Rice \n 2) Chicken Curry \n 3) Grill Chicken \n 4 ) Grill Naan \n 5) Coke \n Please enter the serial number of the item to confirm your order : ");
    scanf("%d",&userChoice);


    if(userChoice == 1){
        printf("\nYour oder Fried Rice is confirmed");
    }else if(userChoice == 2) {
        printf("\nYour oder Chicken Curry is confirmed ");
    }else if(userChoice == 3) {
        printf("\nYour oder Grill Chicken is confirmed ");
    }else if(userChoice == 4) {
        printf("\nYour oder Grill Naan is confirmed ");
    }else if(userChoice == 5) {
        printf("\nYour oder Coke is confirmed ");
    }else{
        printf("\nPlease check again you have entered invalid choice");
    }

    return 0;
};
