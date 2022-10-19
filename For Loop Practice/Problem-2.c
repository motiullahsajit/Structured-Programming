/*
A program to Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    for (int i = 0; i <=255; i++)
    {
        printf("ASCII value of the character %c = %d\n",i,i);
    }
    

    return 0;
}
