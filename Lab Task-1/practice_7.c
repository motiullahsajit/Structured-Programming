/*
Author: Motiullah Sajit
Date : 27-08-22
A program to program to calculate the sum of a number's digits
*/

#include<stdio.h>

int main()
{
	int num, dig1, dig2, dig3, dig4, dig5, sum;

	printf("Enter a five digit number : ");
	scanf("%d", &num);

	dig5=num%10;
	dig4=(num/10)%10;
	dig3=(num/100)%10;
	dig2=(num/1000)%10;
	dig1=(num/10000);

	sum = dig1+dig2+dig3+dig4+dig5;

	printf("\nThe sum of the digits of the dig1 is %d.",dig1);
	printf("\nThe sum of the digits of the dig2 is %d.",dig2);
	printf("\nThe sum of the digits of the dig3 is %d.",dig3);
	printf("\nThe sum of the digits of the dig4 is %d.",dig4);

	printf("The sum of the digits of the number is %d.",sum);

	return 0;
}
