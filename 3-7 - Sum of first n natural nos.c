#include <stdio.h>

void main(){

    int a=0;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    for (int i=1 ; i<=n; i++){

        a+=i;

    }

    printf("%d", a);
}
