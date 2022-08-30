/*
Author: Motiullah Sajit
Date : 27-08-22
A program to convert and print distance in meter, feet, inches and centimeters
*/

#include<stdio.h>

int main(){

float givenDistance;
float distanceInMeter;
float distanceInFeet;
float distanceInInches;
float distanceInCentimeter;

printf("Please enter distance between Mirpur and Ashulia : ");
scanf("%f",&givenDistance);

distanceInMeter = givenDistance * 1000;
distanceInFeet = givenDistance * 3280.84;
distanceInInches = givenDistance * 39370.1;
distanceInCentimeter = givenDistance * 100000;

printf("The distance in meter is %.2f\n",distanceInMeter);
printf("The distance in feet is %.2f\n",distanceInFeet);
printf("The distance in inches is %.2f\n",distanceInInches);
printf("The distance in centimeter is %.2f\n",distanceInCentimeter);

return 0;

}
