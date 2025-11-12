#include <stdio.h>

void main()
{
    float avg,sum,m1,m2,m3;
    printf("Enter Marks for Sub 1: ");
    scanf("%f", &m1);
    printf("Enter Marks for Sub 2: ");
    scanf("%f", &m2);
    printf("Enter Marks for Sub 3: ");
    scanf("%f", &m3);
    avg=(m1+m2+m3)/3.0;
    sum=m1+m2+m3;
    printf("Average: %.2f, Sum: %.2f", avg, sum);
}




