/* Program to measure the total bytes of an array */
#include <stdio.h>

int main()
{
    char list_ch[][2] = {
        '1', 'a',
        '2', 'b',
        '3', 'c',
        '4', 'd',
        '5', 'e',
        '6', 'f'};
    int i;

    printf("The total bytes taken by the array are %d\n", sizeof(list_ch));
    for (i=0; i<6; i++)
    printf("%c      %c\n", list_ch[i][0], list_ch[i][1]);
}