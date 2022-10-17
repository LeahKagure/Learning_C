/* This program calculates the multiplication of integers and prints the value. */
#include <stdio.h>
/* exercise_C.c: This function performs integer multiplication and returns the result. */
int mult(int a, int b)
{
    int result;
    result = a*b;
    return result;
    /*return (a*b) */
}

int main()
{
    int product;
    product = mult(3, 5);
    printf("The multiplication result of 3 and 5 is %d.\n", product);
    return 0;
}