/*
A program to determine the youngest of two
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

int arif, joy;

printf("Please enter the age of Arif: ");
scanf("%d",&arif);

printf("Please enter the age of Joy: ");
scanf("%d",&joy);

if(arif > joy){
    printf("Joy is the youngest of them");
}else{
    printf("Arif is the youngest of them");
};

return 0;

}
