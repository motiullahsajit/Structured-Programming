/*
A C program to display following output
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    for(int i=0;i<=5;i++){
        for(int j = 5-i; j > 0;j--){
            printf("A");
        }
        printf("\n");
    }

    return 0;
}
