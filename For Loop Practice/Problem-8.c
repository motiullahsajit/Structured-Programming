/*
A program calculate the sum of the series
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int n, sum = 0;
    
    printf("Please enter the value of n : ");
    scanf("%d", &n);

    for(int i = n; i >=9;){
        sum += i;
        i-= 4;
    }

    printf("The sum of the series is %d\n", sum);

    return 0;
}
