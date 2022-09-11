/*
A program to calculate Profit and Loss
Author: Motiullah Sajit
*/

#include<stdio.h>

int main(){

float costPrice, sellingPrice;

printf("Please enter the cost price of the item: ");
scanf("%f",&costPrice);

printf("Please enter the selling price of the item: ");
scanf("%f",&sellingPrice);

if(sellingPrice > costPrice){
    printf("The seller has made a profit of %.2f", sellingPrice - costPrice);
}else{
    printf("The seller has made a loss of %.2f", costPrice - sellingPrice);
};


return 0;

}
