#include <stdio.h>

void main(){

    float a;
    float s=0;

    for (int i=1; i<=10; i++){
        printf("Enter number %d : ", i);
        scanf("%f", &a);
        s+=a;
    }

    float m=s/10;
    printf("Sum is %.1f and mean is %.1f", s, m);
}
