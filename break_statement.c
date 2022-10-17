/* break_statement.c: Adding the break statement */
#include <stdio.h>

int main()
{
    int day;

    printf("Please enter a single digit for a day\n");
    printf("(within the range of 1 to 7):\n");
    day = getchar();
    switch (day){
        case '1':
            printf("Day 1\n");
            break;
        case '2':
            printf("Day 1\n");
            break;
        case '3':
            printf("Day 3\n");
            break;
        case '4':
            printf("Day 3\n");
            break;
        case '5':
            printf("Day 3\n");
            break;
        case '6':
            printf("Day 3\n");
            break;
        case '7':
            printf("Day 3\n");
            break;
        dafault:
            printf("The digit is not within the range 1 to 7.\n");
            break;
    }
return 0;
}