/* Program to update a string using a pointer */
#include <stdio.h>

void string (char *str);
int main()
{
    char newString[] = "I like C!";
    char *ptr_ch;
    int i;

    ptr_ch = newString;
    for (i=0; ptr_ch[i]; i++)
    {
        if (ptr_ch[i] == 'i')
            ptr_ch[i] = 'o';
        if (ptr_ch[i] == 'k')
            ptr_ch[i] = 'v';
    }
    string(ptr_ch);
    return 0;
}
void string (char *str)
{
    printf("%s\n",str);
}