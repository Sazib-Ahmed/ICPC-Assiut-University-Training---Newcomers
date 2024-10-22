#include<stdio.h>

int main() {
    //Only one line containing the following space-separated values: 
    //int, long long, char, float and double respectively.
    int _int;
    long long int _ll_int;
    char _char;
    float _float;
    double _double;

    scanf("%d %lld %c %f %lf", &_int, &_ll_int, &_char, &_float, &_double);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf", _int, _ll_int, _char, _float, _double);

    return 0;
}