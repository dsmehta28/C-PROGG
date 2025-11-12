#include <stdio.h>

void main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    for (int i=1 ; i<=2*n; i++){

        if (i%2!=0){

            printf("%d \n", i);
        }
    }
}
