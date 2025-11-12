#include <stdio.h>

int power(int a,int b){
    int ans=1;
    for (int i = 0; i<b; i++){
        ans*=a;
    }
    return ans;
}

int main() {
    printf("***Welcome to power calculator!*** \n");
    printf("    (press enter to continue)     ");
    getchar();
    printf("\n");
    int n1, n2;

    printf("Enter the base number: ");
    scanf("%d", &n1);
    printf("Enter your exponent number: ");
    scanf("%d", &n2);

    printf("\n");
    printf("The expression %d^%d evaluates to: ", n1, n2);
    int c = power(n1,n2);
    printf("%d", c);


    return 0;
}
}
