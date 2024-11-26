#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TEXT "C:\\Users\\dimit\\Desktop\\Dimitrios\\Programming\\C - C++\\Labs\\In-Class Exercises\\text.txt"
#define COPY "C:\\Users\\dimit\\Desktop\\Dimitrios\\Programming\\C - C++\\Labs\\In-Class Exercises\\copy.txt"

int main(void)
{
    FILE * fporig, * fpcopy;
    char line[BUFSIZ];
    if ((fporig = fopen(TEXT, "r")) == NULL)
    {
        printf("Error in opening file\n");
        exit(-1);
    }
    if ((fpcopy = fopen(COPY, "w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(-2);
    }
    while(fgets(line, BUFSIZ, fporig) != NULL)
    {
        fputs(line, fpcopy);
    }
    puts("The file was copied successfully");
    fclose(fporig);
    fclose(fpcopy);
    return 0;
}
