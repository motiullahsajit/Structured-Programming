/*
A program Take 10 integers from keyboard using loop and print their average value on the screen.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int input,sum=0;

    for(int i=0;i<10;i++){ 
        printf("Please enter the number: ");
        scanf("%d",&input);

        sum += input;
    }

    printf("Average of all the 10 integers is %.2f\n",((float)sum/10));

    return 0;
}
