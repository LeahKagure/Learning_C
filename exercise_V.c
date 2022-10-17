/* Program to update character value to decimal */
#include <stdio.h>

int main()
{
    char ch, *ptr_ch;

    ch = 'A';
    ptr_ch = &ch;
    printf("ch: address=%p, content=%c\n", ptr_ch, ch);
    printf("*ptr_ch => %c or %d\n", *ptr_ch, *ptr_ch);
    *ptr_ch = 'B';
    printf("ch: address=%p, content=%d\n", ptr_ch, ch);
    printf("*ptr_ch => %c or %d\n", *ptr_ch, *ptr_ch);
    return 0;
}