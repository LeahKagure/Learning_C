/* Program to print left an fright values of intergers */
#include <stdio.h>

int main()
{
    int x, y, z;

    x = 512;
    y = 1024;
    z = 2048;

    printf("x: address=%p, content=%d\n", &x, x);
    printf("y: address=%p, content=%d\n", &y, y);
    printf("z: address=%p, content=%d\n", &z, z);
}