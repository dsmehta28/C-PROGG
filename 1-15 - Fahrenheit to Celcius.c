#include <stdio.h>

void main()
{
    float c,f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    c=(5.0/9.0)*(f-32);
    printf("Celcius: %.2f", c);
}


