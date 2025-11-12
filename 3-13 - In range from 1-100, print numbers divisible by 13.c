#include <stdio.h>

void main(){

    int a=0;
    int n=100;


    for (int i=1 ; i<=n; i++){

        if (i%13==0){
            a+=i;
        }

    }

    printf("%d", a);
}

