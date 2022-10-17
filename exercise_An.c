/* sprogram to call a function by passing a structure to it */
#include <stdio.h>

    struct employee {
        int id;
        char name[32];
    };
    /* structure intialization */
    struct employee info = {
        1,
        "B.Smith"
    };
    typedef struct employee EMP;
    EMP ContentDisp(EMP s);
int main(void)
{
    EMP deets;

    deets = ContentDisp(deets);
}

EMP ContentDisp(EMP s)
{
    printf("Here is a sample:\n");
    printf("Employee Name: %s\n", info.name);
    printf("Employee ID #: %04d\n\n", info.id);

    /* printf("What's your name?\n");
        gets(info.name);
    printf("What's your ID number?\n");
        scanf("%d", &info.id);

    printf("\nHere are what you entered:\n");
    printf("Name: %s\n", info.name);
    printf("ID #: %04d\n", info.id);*/

    return s;
}