// Pattern A

#include<stdio.h>
void main(){
    printf("Pattern A\n");
    for (int i = 1; i <=2; i++){
        for (int j = 1; j<=3; j++){
            printf("%d %d\n", i, j);
        }
    }

// Pattern B
    printf("Pattern B\n");
    for (int i = 1; i <=3; i++){
        for (int j = 1; j<=i; j++){
            printf("%d %d\n", i, j);
        }
    }
    
// Pattern C
    printf("Pattern C\n");
    for (int i = 1; i <=2; i++){
        for (int j = 1; j<=2; j++){
            for (int k = 1; k<=2; k++){
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    
// Pattern D
    printf("Pattern D\n");
    for (int i = 5; i >=3; i--){
        for (int j = 1; j<=2; j++){
            printf("%d %d\n", i, j);
        }
    }
}
