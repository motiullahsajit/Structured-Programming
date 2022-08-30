/*
Author: Motiullah Sajit
Date : 27-08-22
A program to calculate Gross Salary
*/

#include<stdio.h>

int main(){

float basicSalary;
float dearnessAllowance;
float houseRent;
float grossSalary;

printf("Please enter your basic salary : ");
scanf("%f",&basicSalary);

dearnessAllowance = basicSalary * 0.4;
houseRent = basicSalary * 0.2;

grossSalary = basicSalary + dearnessAllowance + houseRent + grossSalary;

printf("Your Gross Salary is %.2f",grossSalary);

return 0;

}
