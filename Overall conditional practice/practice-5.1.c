/*
Author : Motiullah Sajit
*/

#include<stdio.h>

int main(){
    int currentNumber;

    printf("Please enter the number: ");
    scanf("%d",&currentNumber);


    if (currentNumber%2 != 0){
            currentNumber = (currentNumber*3) + 1;
    }else{
        currentNumber = currentNumber / 2;
    }

    printf("Result: %d",currentNumber);

    return 0;

}
