#include<stdio.h>

int main() {
    float r;
    double pi = 3.141592653;
    scanf("%f", &r);

    //printf("%f %.9lf\n", r, pi);


    printf("%.9lf", pi * (r * r));

    return 0;
}