/*
A program to calculate cost
*/
#include<stdio.h>

int main(){

    float distance, cost;

    printf("Please enter the distance: ");
    scanf("%f",&distance );

    if (distance >= 0 && distance <= 100){
        cost = 5.00;
    }
    else if(distance >100 && distance <= 500){
        cost = 8.00;
    }
    else if (distance >500 && distance < 1000){
        cost = 10.00;
    }
    else if (distance >= 1000){
        cost = 12.00;
    }

    printf("Cost is %.2f",cost);

    return 0;
}
