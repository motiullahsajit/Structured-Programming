/*
Author: Motiullah Sajit
Date : 30-08-22
A program to find out the aggregate marks and percentage marks obtained by the student
*/

#include<stdio.h>

int main(){

float subject1, subject2, subject3, subject4, subject5, aggregateMark, percentageMark;

printf("Please enter the number of subject 1 : ");
scanf("%f",&subject1);
printf("Please enter the number of subject 2 : ");
scanf("%f",&subject2);
printf("Please enter the number of subject 3 : ");
scanf("%f",&subject3);
printf("Please enter the number of subject 4 : ");
scanf("%f",&subject4);
printf("Please enter the number of subject 5 : ");
scanf("%f",&subject5);

aggregateMark = subject1 + subject2 + subject3 + subject4 + subject5;

percentageMark = (aggregateMark / 500 ) * 100;

printf("Aggregate marks obtained by the student %.2f\n",aggregateMark);
printf("Percentage marks obtained by the student is %.2f %%\n",percentageMark);

return 0;

}
