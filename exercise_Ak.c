/* Program to print out enumerated names */
#include <stdio.h>

int main()
{
    enum tag {name1, name2 = 10, name3, name4};
    printf("The vales of tag name1 are: %d\n", name1);
    printf("The vales of tag name2 are: %d\n", name2);
    printf("The vales of tag name3 are: %d\n", name3);
    printf("The vales of tag name4 are: %d\n", name4);
    return 0;
}