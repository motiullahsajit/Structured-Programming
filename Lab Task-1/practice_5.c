/*
Author: Motiullah Sajit
Date : 27-08-22
A program to calculate area and perimeter of a rectangle and area and circumference of a circle
*/

#include<stdio.h>

int main(){

float length;
float breadth;
float radius;
float areaRectangle;
float perimeterRectangle;
float areaCircle;
float circumferenceCircle;
#define PI 3.142857


printf("Please enter the length of the rectangle : ");
scanf("%f",&length);
printf("Please enter the breadth of the rectangle  : ");
scanf("%f",&breadth);
printf("Please enter the radius of the circle : ");
scanf("%f",&radius);

areaRectangle = length * breadth;
perimeterRectangle = 2 * (length + breadth);
areaCircle = PI * radius * radius ;
circumferenceCircle = 2 * PI * radius;

printf("The area of the rectangle is is %.2f\n",areaRectangle);
printf("The perimeter of the rectangle is %.2f\n",perimeterRectangle);
printf("The area of the circle is %.2f\n",areaCircle);
printf("The the circumference of the circle is %.2f\n",circumferenceCircle);

return 0;

}
