#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX 100
#define MIN 0

double CalcMax(int row[], int size) {
    int i = 0;
    double max;
    while (i < size) {
        max = row[i];
        i++;
        if (row[i] > max) {
            max = row[i];
        }
    }
    return max;
}

int ReadArray(int row[MAX]) {
    int i = 0;
    int input;
    while (i < MAX) {
        printf("Enter integer %d: ", i);
        scanf("%d", &input);  
        if (input == 999) {
            break;  
        }
        row[i] = input;  
        i++;  
    }
    return i;
}


void PrintArray(int row[], int size) {
    printf("The integers in the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", row[i]);
    }
    printf("\n");
}

int main(void) {
    int row[MAX];  
    int size; 
    double max;
    size = ReadArray(row);  
    max = CalcMax(row, size);
    printf("The maximum value entered was %.2lf\n", max);
    PrintArray(row, size);    
    return 0;
}