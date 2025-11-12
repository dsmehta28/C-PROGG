//ns=gs-0.1gs

#include <stdio.h>

void main()
{
    float ns,gs,d;
    printf("Enter Gross Sales: ");
    scanf("%f", &gs);
    d=0.1*gs;
    ns=gs-d;
    printf("Net Sales: %.2f", ns);
}




