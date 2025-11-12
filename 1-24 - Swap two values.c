#include <stdio.h>

void main() {
    int a, b;
    printf("Enter value 1: ");
    scanf("%d", &a);
    printf("Enter value 2: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value 1 became %d and Value 2 became %d\n", a, b);
}

