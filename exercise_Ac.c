/* Program to copy string from str1 to str2 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "This is Exercise 1.";
    char str2[20];
    int i;

    for (i=0; str1[i]; i++)
    str2[i] = str1[i];
    str2[i] = '\0';
    printf("%s\n", str2);

    strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}