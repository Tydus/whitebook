#include <stdio.h>

int main(){
    double pi = 0;
    int i = 1;
    int sign = 1;
    for(; ; ){
        double epsilon = 1. / i;
        if(epsilon < 1e-6) break;
        pi += sign * epsilon;
        sign = -sign;
        i += 2;
    }
    printf("%.5lf\n", pi);
    return 0;
}
