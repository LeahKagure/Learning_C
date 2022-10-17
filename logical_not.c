/* logical_not.c: Using the logical negation operator */
#include <stdio.h>

int main()
{
    int num;

    num = 7;
    printf("Given num = 7\n");
    printf("!(num < 7) yields: %d\n", !(num < 7));
    printf("!(num > 7) yields: %d\n", !(num > 7));
    printf("!(num == 7) yields: %d\n", !(num == 7));
    return 0;
}