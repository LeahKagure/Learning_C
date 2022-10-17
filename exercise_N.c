/* Program that prins out the values of !x and !y */
#include <stdio.h>

int main()
{
    int x, y;

    x = 0XEFFF;
    y = 0X1000;

    printf("!x yeilds: %d (i.e., %u)\n", !x, !x);
    printf("!y yields: %d (i.e., %u)\n", !y, !y);
    return 0;
}