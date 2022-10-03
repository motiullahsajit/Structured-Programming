/*
A C program to input basic salary of an employee and calculate its Gross salary
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){
    float baseSalary;

    printf("Please enter the base salary of the employee: ");
    scanf("%f",&baseSalary);

    if(baseSalary <= 10000 && baseSalary > 0){
        printf("Gross salary of the employee is : %.2f",(baseSalary+ (baseSalary * 0.20)+ (baseSalary * 0.80)));
    }else if(baseSalary <= 20000 && baseSalary > 10000){
        printf("Gross salary of the employee is : %.2f",(baseSalary+ (baseSalary * 0.25)+ (baseSalary * 0.90)));
    }else if(baseSalary > 20000){
        printf("Gross salary of the employee is : %.2f",(baseSalary+ (baseSalary * 0.30)+ (baseSalary * 0.95)));
    }else{
        printf("Your input salary is invalid, please check again");
    };

    return 0;
};
