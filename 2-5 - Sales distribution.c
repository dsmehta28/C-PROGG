#include <stdio.h>

void main()
{
    float a,b,n;
    printf("Enter Gross Sales : \n");
    scanf("%f", &a);

    if (a>20000){
        b=a*0.15;
    }
    else if(a>10000){
        b=a*0.10;
    }
    else{
        b=a*0.05;
    }

    n=a-b;

    printf("Net sales = %.2f", n);
}
