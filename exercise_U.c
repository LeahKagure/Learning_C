/* Program to update value of a double */
#include <stdio.h>

int main()
{
    double flt_num, *ptr_flt_num;
    flt_num = 123.45;

    ptr_flt_num = &flt_num;
    printf("flt_num: address=%p, content=%5.2f\n", ptr_flt_num, flt_num);
    printf("*ptr_flt_num => %5.2f\n", *ptr_flt_num);
    *ptr_flt_num = 543.21;
    printf("flt_num: address=%p, content=%5.2f\n", ptr_flt_num, flt_num);
    printf("*ptr_flt_num => %5.2f\n", *ptr_flt_num);
    return 0;
}