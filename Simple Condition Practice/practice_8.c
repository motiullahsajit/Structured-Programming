/*
A program to determine whether a given number is Zero (0) or not.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

int number;

printf("Please enter the number: ");
scanf("%d",&number);

if(number == 0){
    printf("The entered number is Zero (0)");
}else{
    printf("The entered number is not Zero (0)");
}

return 0;

}
