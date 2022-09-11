/*
A program find the number is Even or Odd
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

int number;

printf("Please enter the number : ");
scanf("%d",&number);

if(number%2 == 0){
    printf("The number %d is an Even number",number);
}else{
    printf("The number %d is an Odd number",number);
};


return 0;

}
