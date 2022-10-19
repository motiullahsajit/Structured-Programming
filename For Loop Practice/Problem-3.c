/*
A Overtime Calculator program
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int working_hour;
    float total_pay = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the total working hour of the employee: ");
        scanf("%d", &working_hour);

        total_pay += ((working_hour - 36)*120.00);
    }
    
    printf("Total overtime pay the employees : %.2f BDT", total_pay);
    
    return 0;
}
