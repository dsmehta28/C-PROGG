#include<stdio.h>
void main(){
    int n, c = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        if (n%i == 0){
            c+=1;
        }
    }
    if (c == 2){
        printf("It is a prime number!");
    }
    else{
        printf("It is not a prime number!");
    }
}
