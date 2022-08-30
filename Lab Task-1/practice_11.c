/*
Author: Motiullah Sajit
Date : 30-08-22
A program to  find the total number of currency notes of each denomination the cashier will have to give to the with-drawer
*/

#include <stdio.h>

int main()
{
    int amount;

    printf("Enter the withdrawn amount (in hundreds): ");
    scanf("%d",&amount);

    printf("\nThe cashier will have to give to the with-drawer notes of 100 is :  %d", amount / 100);
    printf("\nThe cashier will have to give to the with-drawer notes of 50 is :  %d", (amount % 100) / 50);
    printf("\nThe cashier will have to give to the with-drawer notes of 10 is :  %d", (((amount % 100) % 50) / 10));

    if((((amount % 100) % 50) % 10)!= 0){
        printf("\n\nAmount still remaining is :  %d", (((amount % 100) % 50) % 10));
    }

}
