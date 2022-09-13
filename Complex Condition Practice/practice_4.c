/*
 A C program to print day name of week
 Author : Motiullah Sajit
 */

#include <stdio.h>

int main()
{
    int weekDayNum;

    printf("Enter week number (1-7): ");
    scanf("%d", &weekDayNum);


    if(weekDayNum == 1)
    {
         printf("Saturday");
    }
    else if(weekDayNum == 2)
    {
         printf("Sunday");
    }
    else if(weekDayNum == 3)
    {
        printf("Monday");
    }
    else if(weekDayNum == 4)
    {
        printf("Tuesday");
    }
    else if(weekDayNum == 5)
    {
        printf("Wednesday");
    }
    else if(weekDayNum == 6)
    {
        printf("Thursday");
    }
    else if(weekDayNum == 7)
    {
        printf("Friday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
