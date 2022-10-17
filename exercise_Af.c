/* a function that can multiply integers and print the result */
#include <stdio.h>

int MultiTwo(int a, int b)
{
    return (a * b);
}

int main()
{
    printf("The result is: %d\n", MultiTwo(20,30));
    return 0;
}