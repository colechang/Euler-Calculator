#include <stdio.h>

int main(void){
    long i = 1;
    long n = 1;
    double sum;
    double epsilon;
    double index;

    printf("Enter epsilon: ");
    scanf("%lf", &epsilon);

    for(sum = 1.0, index = 1.0; index > epsilon; i++){
        index = (1.0/( n*= i));
        sum = sum + index;
    }
    printf("Approximation of e: %f\n", sum);
    return 0;
}