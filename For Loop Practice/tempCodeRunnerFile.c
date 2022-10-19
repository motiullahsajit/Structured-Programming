/*
A program
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int count;
    for(int i=5;i>0;i--){
        count = i;
        for(int j = i; j>0 ;j--){
            printf("%d",count-j);
        }
        printf("\n");
    }


    return 0;
}
