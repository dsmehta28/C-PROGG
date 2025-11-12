#include <stdio.h>

void main(){

    float a;
    int n;
    float s=0;

    printf("Enter how many values you want to enter: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        printf("Enter number %d : ", i);
        scanf("%f", &a);
        s+=a;
    }

    float m=s/n;
    printf("Sum is %.1f and mean is %.1f", s, m);
}

