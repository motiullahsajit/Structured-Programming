/*
A C program to display following output
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int count;
    for(int i=6;i>0;i--){
        count = i;
        for(int j =1; j<i ;j++){
            printf("%d",count-j);
        }
        printf("\n");
    }

    return 0;
}
