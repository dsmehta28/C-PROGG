#include <stdio.h>

void main()
{
    float ar,pr,l,b;
    printf("Enter Length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    pr=4*l;
    ar=l*b;
    printf("Area: %.2f sq. meter, Perimeter: %.2f meter.", ar, pr);
}


