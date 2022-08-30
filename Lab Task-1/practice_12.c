/*
Author: Motiullah Sajit
Date : 27-08-22
A program to find the cost price of one item
*/

#include<stdio.h>
int main()
{
    float sellingPrice, profit, costPrice;

    printf("Enter the selling price of 15 items: ");
    scanf("%f", &sellingPrice);
    printf("Enter the profit on 15 items: ");
    scanf("%f", &profit);

    costPrice = (sellingPrice - profit)/15;

    printf("\nThe cost price of an item is %.2f.", costPrice);

    return (0);
}
