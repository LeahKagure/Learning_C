/* Program to display array elements */
#include <stdio.h>

int main()
{
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for (i=0; i<5; i++)
    printf("%c", array_ch[i]);
    return 0;
}