#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers: \n");
    printf("Enter a number, press enter, enter another number. \n");
    scanf("%d \n %d", &a, &b);
    if (a>b){
        printf("%d is the bigger number.", a);

    }

    else{
        printf("%d is the bigger number.", b);
    }
}
