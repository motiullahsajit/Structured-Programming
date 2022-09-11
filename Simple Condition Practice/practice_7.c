/*
A program to determine whether a number is negative or not
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

float number;

printf("Please enter the number: ");
scanf("%f",&number);

if(number < 0){
    printf("The entered number is Negative");
}else{
    printf("The entered number is not Negative");
}

return 0;

}
