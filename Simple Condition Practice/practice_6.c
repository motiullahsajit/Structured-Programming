/*
A program to determine whether a number is positive or not.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

float number;

printf("Please enter the number: ", number);
scanf("%f",&number);

if (number > 0){
    printf("The number %.2f is a positive number",number);
}else{
    printf("The number %.2f is not a positive number",number);
};


return 0;

}
