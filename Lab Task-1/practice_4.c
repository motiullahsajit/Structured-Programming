/*
Author: Motiullah Sajit
Date : 30-08-22
A program to convert temperature Fahrenheit degrees to Centigrade degrees
*/

#include<stdio.h>

int main(){

float fahrenheitDegree, centigradeDegree;
char ch=248;

printf("Please the temperature in Fahrenheit degree : ");
scanf("%f",&fahrenheitDegree);

centigradeDegree = (fahrenheitDegree - 32) * 5 / 9;

printf("The temperature in Centigrade degree is %.2f%c C",centigradeDegree, ch);

return 0;

}
