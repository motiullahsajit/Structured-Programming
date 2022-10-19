/*
A program to find the factorial value of any number
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int number,factorial=1;

    printf("Enter the number : ");
    scanf("%d",&number);

    for (int i = number; i > 0; i--)
    {
        factorial *= i;
    }
    
    printf("factorial of %d is %d\n", number,factorial);

    return 0;
}
