/* Program that reads two integers and outputs their sum */
#include <stdio.h>

/* int main()
{
    int c, d;
    printf("Enter two integers:\n");
    scanf("%d   %d", &c, &d);
    int outcome = c+d;
    printf("The result is: %d\n", outcome);
} */
int addition(int x, int y)
{
    int result;
    result = x+y;
    return result;
}

int main()
{
    int sum;
    int a, b;
    printf("Using a function >> Enter two integers:\n");
    scanf("%d   %d", &a, &b);
    sum = addition(a,b);
    printf("The result is: %d\n", sum);

    /* Without using a function */
    int c, d;
    printf("Now without a function >> Enter two integers:\n");
    scanf("%d   %d", &c, &d);
    int outcome = c+d;
    printf("The outcome is: %d\n", outcome);
    return 0;
}