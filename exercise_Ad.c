/* Program to measure the length of a string */
#include <stdio.h>
#include <string.h>

int main()
{
    char array_ch[] = {'a', 'b', 'c', 'd'};
    int i;
    int count = 0;

    for (i=0; array_ch[i]; i++)
    count++;
    printf("%d\n", count);

    printf("%d\n", strlen(array_ch));
    return 0;
}