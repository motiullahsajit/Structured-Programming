
/*
A C program that can take input the age of your father, mother and uncle and your program should output who is the oldest, who is youngest and whose age is between oldest and youngest.

Author : Motiullah Sajit
*/


#include<stdio.h>

int main(){

    int father, mother, uncle;

    printf("Enter your father's age: ");
    scanf("%d",&father);
    printf("Enter your mother's age: ");
    scanf("%d",&mother);
    printf("Enter your uncle's age: ");
    scanf("%d",&uncle);

    if(father > mother && father > uncle){
        printf("Your father is the oldest person.\n");
    }else if(father < mother && father < uncle){
        printf("Your father is the youngest person.\n");
    }else{
        printf("Your father's age is between oldest and youngest age.\n");
    }


    if(mother > father && mother > uncle){
        printf("Your mother is the oldest person.\n");
    }else if(mother < father && mother < uncle){
        printf("Your mother is the youngest person.\n");
    }else{
        printf("Your mother's age is between oldest and youngest age.\n");
    }

    if(uncle > mother && uncle > father){
        printf("Your uncle is the oldest person.\n");
    }else if(uncle < mother && uncle < father){
        printf("Your uncle is the youngest person.\n");
    }else{
        printf("Your uncle's age is between oldest and youngest age.\n");
    }


    return 0;
}
