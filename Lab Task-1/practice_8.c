/*
Author: Motiullah Sajit
Date : 30-08-22
A program to reverse a number
*/


#include<stdio.h>
int main()
{
    int number=0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        number = number * 10;
        number = n % 10 + number;
        n = n/10;
    }

    printf("The reversed number is %d", number);
    return 0;
}
