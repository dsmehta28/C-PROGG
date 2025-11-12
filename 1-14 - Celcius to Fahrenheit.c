#include <stdio.h>

void main()
{
    float c,f;
    printf("Enter Celcius: ");
    scanf("%f", &c);
    f=((c*(9.0/5))+32);
    printf("Fahrenheit: %f", f);
}
