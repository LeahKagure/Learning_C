/* A program that prints a value in floating-point and scientif notation formats */
#include <stdio.h>

int main()
{
    double dbl_num = 123.456;
    printf("The floating-point value is %f\n", dbl_num);
    printf("The scientific notation value is %e\n", dbl_num);
    return 0;
}