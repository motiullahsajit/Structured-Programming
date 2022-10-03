/*
A program to check if the area of the triangle is greater than the perimeter of the triangle
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

float side1, side2, base , height;

printf("Please enter the value of the triangle's side 1: ");
scanf("%f",&side1);

printf("Please enter the value of the triangle's side 2: ");
scanf("%f",&side2);

printf("Please enter the value of the triangle's base: ");
scanf("%f",&base);

printf("Please enter the value of the triangle's height: ");
scanf("%f",&height);

if((side1 + side2 + base)>(0.5 * base * height)){
    printf("The perimeter of the triangle is greater than the area of the traingle");
}else{
    printf("The area of the triangle is greater than the perimeter of the triangle");
};



return 0;

}
