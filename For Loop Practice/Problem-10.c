/*
A C program to display a half pyramid consist of only Zeros and Ones.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    for(int i=0;i<6;i++){
        for(int j = 0;j< i;j++){
            printf("%d",j%2);
        }
        printf("\n");
    }

    return 0;
}
