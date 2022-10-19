/*
A C program to display number pyramid.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){
    int count=0;
    for(int i=1;i<6;i++){
        
        for(int j = 1; j<= i;j++){
            printf("%d",count+j);
        }
        
        count = i;
        printf("\n");
    }

    return 0;
}
