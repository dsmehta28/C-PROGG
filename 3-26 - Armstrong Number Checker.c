#include <stdio.h>
int main()
{
    printf("Armstrong Number Checker!");
    int n, r;
    printf("Enter your number: ");
    scanf("%d", &n);
    int s = 0;
    int temp = n;
    while (n>0){
      r = n%10;
      s += (r*r*r);
      n = n/10;
    }
    
    if (s == temp){
      printf("It is Armstrong number!");
    }
    else{
      printf("It is not Armstrong number!");
    }
}
