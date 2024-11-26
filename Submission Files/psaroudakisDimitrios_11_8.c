#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Read (int *mult_number, int *limit);
void CalcPrint(int mult_number, int limit);

int main (void)
{
    int mult_number, limit;
    do
    {
        Read(&mult_number, &limit);
        if (mult_number != 0 && limit != 0)
        {
            CalcPrint(mult_number, limit);
        }
    } while (mult_number != 0 && limit != 0);  // Loop until a 0 is entered
    printf("Thanks\n");
    return 0;
}

void Read (int *mult_number, int *limit)
{
    printf("Please enter the number that you want to use for the table of multiplication: ");
    scanf("%d%*c", mult_number);
    printf("Please enter the limit: ");
    scanf("%d%*c", limit);
}

void CalcPrint(int mult_number, int limit)
{
    int i = 1;
    while (mult_number * i <= limit)
    {
        int result = mult_number * i;
        printf("%d\n", result);
        i++;
    }
}