/*
A C program to display a half pyramid of star.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    for(int i=0;i<6;i++){
        for(int j = 0;j< i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
