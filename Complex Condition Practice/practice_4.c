/*
 A C program to print day name of week
 Author : Motiullah Sajit
 */
#include <stdio.h>

int main()
{
    int weekNum;

    printf("Enter week number (1-52): ");
    scanf("%d", &weekNum);

    if(weekNum > 0 && weekNum <=52)
    {
        printf("Saturday\n");
        printf("Sunday\n");
        printf("Monday\n");
        printf("Tuesday\n");
        printf("Wednesday\n");
        printf("Thursday\n");
        printf("Friday\n");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-52.");
    }

    return 0;
}
