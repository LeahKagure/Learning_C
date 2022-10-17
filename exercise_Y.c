/* program to print the value of each array element */
#include <stdio.h>

int main()
{
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for (i=0; i<5; i++)
    printf("%c = %d\n", array_ch[i], array_ch[i]);
    return 0;
}