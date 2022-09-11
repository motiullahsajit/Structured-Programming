/*
A program to check whether a triangle is valid or not
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

float angle1, angle2, angle3;

printf("Please enter the value of triangle's angle 1: ");
scanf("%f",&angle1);

printf("Please enter the value of triangle's angle 2: ");
scanf("%f",&angle2);

printf("Please enter the value of triangle's angle 3: ");
scanf("%f",&angle3);

if (angle1 + angle2 + angle3 == 180){
    printf("The Triangle is valid");
}else{
    printf("The Triangle is not valid");
};

return 0;

}
