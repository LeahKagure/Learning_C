/* static_specifier.c: Using the static specifier */
#include <stdio.h>
/* the add_two function */
int add_two(int x, int y)
{
    static int counter = 1;
    static int result = 0;

    printf("This is the previous result: %d\n",result);
    printf("This is the function call of %d,\n", counter++);
    result = x + y;
    return (result);
}
/* the main function */
int main()
{
    int i, j;

    for (i=0,j=5; i<5; i++, j--)
        printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
    return 0;
}