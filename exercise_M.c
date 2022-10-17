/* Using a while loop as the outer loop, and a do-while loop as the inner loop */
#include <stdio.h>

int main()
{
    int i, j;

    i=1;
    while (i<=3) {
        printf("The start of iteration %d of the outer loop.\n", i);
        j=1;
        do  {
            printf("    Iteration %d of the inner loop.\n", j);
            j++;
        } while (j<=4);
         printf("The end of iteration %d of the outer loop.\n", i);
         i++;
    }
    return 0;
}