/*
Author: Motiullah Sajit
Date : 30-08-22
A program to print a new number by adding one to each of its digits of a 5 digit number
*/

#include<stdio.h>

int main()
{
    int num, sum, i, number, count=0, n=1;

    printf("Enter the number: ");
    scanf("%d", &num);

    number = num;

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;
        n = n + 1;
    }

    sum = num + n;

    printf("The number after adding one to each of its digits: %d", sum);
}
