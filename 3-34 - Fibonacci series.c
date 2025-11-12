#include<stdio.h>
void main(){
    int n, f = 1;
    int first = 0;
    int second = 1;
    int next = first + second;
    printf("Enter the number till : " );
    scanf("%d", &n);
    printf("Fibonacchi Series to %d numbers:- \n", n);
    for (int i = 0 ; i<=n; i++){
        if (!f){printf(", ");}
        printf("%d", next);
        next = first + second;
        first = second;
        second = next;
        f = 0;
    }
    
}
