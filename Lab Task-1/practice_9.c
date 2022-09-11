/*
Author: Motiullah Sajit
Date : 27-08-22
A program to obtain the sum of the first and last digit of a number
*/

#include<stdio.h>

int main()
{
    int num, dig1, dig2, dig3, dig4, sum;

	printf("Enter a four digit number : ");
	scanf("%d", &num);

	dig4=num%10;
	dig3=(num/10)%10;
	dig2=(num/100)%10;
	dig1=(num/1000);

	sum = dig1+dig4;

	printf("\nThe sum of the digits of the dig1 is %d.",dig1);
	printf("\nThe sum of the digits of the dig2 is %d.",dig2);
	printf("\nThe sum of the digits of the dig3 is %d.",dig3);
	printf("\nThe sum of the digits of the dig4 is %d.",dig4);

	printf("\nThe sum of the 1st and last digit is %d.",sum);

	return 0;

}
