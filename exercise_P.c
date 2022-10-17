/* Program showing hex values of expressions */
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;

    a = 0XFFFF;
    b = 0X8888;
    c = 0XABCD;
    d = 0X4567;
    e = 0XDCBA;
    f = 0X1234;

    printf("OXFFFF ^ 0X8888 yields: 0X%04X\n", a ^ b);
    printf("0XABCD & 0X4567 yields: 0X%04X\n", c & d);
    printf("0XDCBA | 0X1234 yields: 0X%04X\n", e | f);
    return 0;
}