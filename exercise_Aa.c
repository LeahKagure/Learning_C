/* Program to print character on the screen */
#include <stdio.h>

int main()
{
    char array_ch[15] = {'I', ' ',
                        'l', 'i', 'k',
                        'e', ' ', 'C', '!'};
    int i;
    /* array_ch[i] in a logical test */
    for (i=0; array_ch[i]; i++)
    printf("%c", array_ch[i]);
    printf("\n");
    return 0;
}