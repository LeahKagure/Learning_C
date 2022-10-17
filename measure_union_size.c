/* measure_union_size.c: Measuring the size of a union */
#include <stdio.h>
#include <string.h>

int main(void)
{
    union u {
        double x;
        int y;
    } a_union;
    
    struct s {
        double x;
        int y;
    } a_struct;

    printf("The size of double: %d-byte\n", sizeof(double));
    printf("The size of int:    %d-byte\n", sizeof(int));
    printf("The size of a_union:%d-byte\n", sizeof(a_union));
    printf("The size of a_struct:%d-byte\n", sizeof(a_struct));

    return 0;
    
}