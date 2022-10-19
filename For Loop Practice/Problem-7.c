/*
A program to calculate the factorial of two numbers and finally sum the factorials of these numbers as output. 
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int number1, number2, fac1=1, fac2=1;
    
    printf("Enter the number 1 : ");
    scanf("%d",&number1);

    printf("Enter the number 2 : ");
    scanf("%d",&number2);

    for (int i = number1; i > 0; i--)
    {
        fac1 *= i;
    }

    for (int i = number2; i > 0; i--)
    {
        fac2 *= i;
    }
    
    printf("The sum of the number's factorial = %d\n", fac1+fac2);

    return 0;
}
