#include<stdio.h>
void main(){
    int n, s = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factors are: ");
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            printf("%d, ", i);
            s+=i;
        }
    }
    printf("\n");
    if (s == n){
        printf("It is a perfect number!");
    }
    else{
        printf("It is not a perfect number!");
    }
}
