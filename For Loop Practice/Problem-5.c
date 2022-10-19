/*
A program to Check the following number prime or not by taking input from the user.
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

    int number,is_prime=1;

    printf("Please enter the number: ");
    scanf("%d", &number);

    if(number > 0){  
        for (int i = 2; i < number; i++)
        {
            if(number %i== 0){
                is_prime = 0;
                break;
            }
        }

        if(is_prime == 0){
            printf("The number of %d is not prime",number);
        }else{
            printf("The number of %d is prime",number);
        }
        
    }else{
        printf("Please enter a valid input");
    }


    return 0;
}
