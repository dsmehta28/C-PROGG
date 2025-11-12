// Net salary = gs+a-d

#include <stdio.h>

void main()
{
    float ns,gs,a,d;
    printf("Enter Gross Salary: ");
    scanf("%f", &gs);
    a=0.1*gs;
    d=0.03*gs;
    ns=gs+a-d;
    printf("Net Salary: %.2f", ns);
}



