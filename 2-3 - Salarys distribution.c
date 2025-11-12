// net salary = gross + allowances - deduct

#include <stdio.h>

void main()
{
    float a,n,al,d;
    printf("Enter Gross Salary: \n");
    scanf("%f", &a);

    if (a>10000){
        al=a*0.1;
        d=a*0.03;
    }
    else if(a>5000){
        al=a*0.07;
        d=a*0.02;
    }

    n=a+al-d;
    printf("Your net salary is %.2f",n);
}
