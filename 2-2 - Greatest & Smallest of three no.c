// Greatest and smallest of 3 numbers.

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%d \n %d \n %d", &a, &b, &c);
    int s,g,m;

    // to find smaller & larger b/w first 2 numbers.
    if(a<b){
        s=a;
        m=b;
    }
    else if(b<a){
        s=b;
        m=a;
    }

    // to compare with the third number and decide the final order.
    if(s>c){
        s=c;
    }
    else if(m>c){
        g=m;
        m=c;
    }
    else{
        g=c;
    }

    printf("%d is the smallest and %d is the largest number.", s, g);

}

