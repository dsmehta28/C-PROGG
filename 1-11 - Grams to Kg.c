#include <stdio.h>

void main()
{
    float g;
    float kg;
    printf("Enter Grams: ");
    scanf("%f", &g);
    kg=g/1000;
    printf("Kilograms: %.2f", kg);
}

