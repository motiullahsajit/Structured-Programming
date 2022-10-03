/*
Author: Motiullah Sajit
Date : 30-08-22
A program to print a new number by adding one to each of its digits of a 5 digit number
*/

#include<stdio.h>

int main()
{
    int num, sum;

    printf("Enter the number: ");
    scanf("%d", &num);

    sum = num + 11111;

    printf("The number after adding one to each of its digits: %d", sum);
}
