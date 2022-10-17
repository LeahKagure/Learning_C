/* Program to display values held by a structure */
#include <stdio.h>

struct automobile {
    int year;
    char model[10];
    int engine_power;
    double weight;
} sedan = {
    1997,
    "New Model",
    200,
    2345.67};

    int main(void)
    {
        printf("Year:%d\n", sedan.year);
        printf("Model: %s\n", sedan.model);
        printf("Engine power: %d\n", sedan.engine_power);
        printf("Weight: %6.2f\n", sedan.weight);
    }
