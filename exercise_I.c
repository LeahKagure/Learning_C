/* Program that initializes the integer variable x with 1 and outputs results of two statements */
#include <stdio.h>

int main()
{
    int x;

    x = 1;
    printf("x++ produces:   %d\n", x++);
    printf("Now x contains  %d\n", x);
    return 0;
}