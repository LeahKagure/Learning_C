/* A program that runs two for loops */
#include <stdio.h>

int main()
{
    int i, j;

    for (i=0, j=1; i<8; i++, j++)
        printf("first loop: %d  +   %d  =   %d\n", i, j, i+j);

    for (i=0, j=1; i<8; i++, j++);
        printf("second loop: %d  +   %d  =   %d\n", i, j, i+j);

    return 0;
}