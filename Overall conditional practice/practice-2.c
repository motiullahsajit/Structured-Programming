
/*
A C program that can take input of the values of  X & Y Coordinates and show output in which quadrant inputted coordinates lies are.

Author : Motiullah Sajit
*/


#include<stdio.h>

int main(){

    float X,Y;

    printf("Please enter the value of X coordinate point: ");
    scanf ("%f",&X);
    printf("Please enter the value of Y coordinate point: ");
    scanf ("%f",&Y);

    if (X>0 && Y>0) printf("Inputted coordinate (%.1f,%.1f) lies in 1st Quadrant\n",X,Y);
    else if (X<0 && Y>0) printf("Inputted coordinate (%.1f,%.1f) lies in 2nd Quadrant\n",X,Y);
    else if (X<0 && Y<0) printf("Inputted coordinate (%.1f,%.1f) lies in 3rd Quadrant\n",X,Y);
    else if (X>0 && Y<0) printf("Inputted coordinate (%.1f,%.1f) lies in 4th Quadrant\n",X,Y);

    return 0;


    return 0;
}
