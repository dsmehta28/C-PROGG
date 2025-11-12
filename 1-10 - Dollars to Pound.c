#include <stdio.h>

void main()
{
    float d;
    float rs;
    float pd;
    printf("Enter Dollars: ");
    scanf("%f", &d);
    rs=48*d;
    pd=rs/70;
    printf("Pound: %.1f", pd);
}

