#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

enum months
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

void Read(int *day, int *month, int days[MONTHS]);
void PrintDay(int day, int month);
void NextDay(int *day, int *month, int days[MONTHS]);

int main (void)
{
    int day, month;
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Read(&day, &month, days);
    PrintDay(day, month);
    NextDay(&day, &month, days);
    PrintDay(day, month);
    return 0;
}

void Read(int *day, int *month, int days[MONTHS])
{
    printf("Please enter the current day and month as integers (DD MM): ");
    scanf("%d%d%*c", day, month);
    if ((*month < 1 || *month > 12) || (*day < 1 || *day > days[*month - 1]))
    {
        printf("Invalid date entered, please try again!");
        exit(-1);
    }
}

void PrintDay(int day, int month)
{
    printf("\n");
   switch (month)
   {
       case January: printf("The current day is: January %d", day); break;
       case February: printf("The current day is: February %d", day); break;
       case March: printf("The current day is: March %d", day); break;
       case April: printf("The current day is: April %d", day); break;
       case May: printf("The current day is: May %d", day); break;
       case June: printf("The current day is: June %d", day); break;
       case July: printf("The current day is: July %d", day); break;
       case August: printf("The current day is: August %d", day); break;
       case September: printf("The current day is: September %d", day); break;
       case October: printf("The current day is: October %d", day); break;
       case November: printf("The current day is: November %d", day); break;
       case December: printf("The current day is: December %d", day); break;
   default: printf("The current date entered is invalid"); exit(-2);
   }
}

void NextDay(int *day, int *month, int days[MONTHS])
{
    (*day)++;
    if (days[*month - 1] < *day)
    {
        *day = 1;
        (*month)++;
    }
}