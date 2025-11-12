#include <stdio.h>

void main() {
    int i, j;
  
  // Pattern A
  
    printf("Pattern A\n");
    for (i = 1; i <= 5; i++) {
        printf("%d %d\n", i, 6 - i);
    }
  
// Pattern B
  
    printf("\nPattern B\n");
    int a = 1, b = 5;
    for (i = 1; i <= 5; i++) {
        printf("%d %d\n", a, b);
        if (i % 2 == 0) { 
            a++;
            b--;
        }
    }
}
