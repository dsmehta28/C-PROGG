#include <stdio.h>

void main()
{
    double b, kb, mb, gb;
    printf("Enter Bytes: ");
    scanf("%lf", &b);
    kb=b/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("Kb: %lf, Mb: %lf, Gb: %lf", kb, mb, gb);
}


