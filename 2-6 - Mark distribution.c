// >=70 : distinction, 60: first, 50: second, 35: third class, otherwise fail.

#include <stdio.h>

void main()
{
    float a,b,c;
    printf("Enter Marks of any 3 Subjects: \n");
    scanf("%f \n %f \n %f", &a, &b, &c);

    float avg = (a+b+c)/3;

    if (avg>=70){
        printf("Your grade is DISTINCTION!");
    }
    else if(avg>=60){
        printf("Your grade is FIRST!");

    }
    else if(avg>=50){
        printf("Your grade is SECOND!");

    }
    else if(avg>=35){
        printf("Your grade is THIRD CLASS");
    }
    else{
        printf("You have FAILED the class!");
    }
}
