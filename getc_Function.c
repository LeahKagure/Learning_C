/* getc(_)Function.c: Reading input by calling getc() */
#include <stdio.h>

int main()
{
    int ch;
    
    printf("Please type in one character:\n");
    ch = getc(stdin);
    printf("The character you just enteres is: %c\n", ch);
    return 0;
}