/* Program showing two methods to measure memory taken by array*/
#include <stdio.h>

int main()
{
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};
    int i;

    printf("The first method to measure memory taken by the array is, sizeof(array_name)\n");
    printf("I..  %d bytes\n",sizeof(list_data));
    printf("The second method to measure memory taken by the array is, sizeof(data_type) * number of elements\n");
    printf("II.. %d bytes\n", sizeof(double) * 6);
    printf("\n");
    for (i=0; i<5; i++)
    printf("%.5f\n", list_data[i]);
    return 0;
    
}