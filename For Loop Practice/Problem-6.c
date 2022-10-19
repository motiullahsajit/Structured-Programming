/*
A program to print start pyramid
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int row;
    printf("Please enter the number of rows: ");
    scanf("%d", &row);

    for(int i=1; i<=row;i++){
        
        for(int j= row-i; j >0;j--){
            printf(" ");
        }

        for(int j = 1; j<=2*i-1; j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
