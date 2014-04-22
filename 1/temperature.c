#include <stdio.h>

int main(){
    float f;
    scanf("%f", &f);
    float c = 5*(f-32)/9;
    printf("%.3f\n", c);
    return 0;
}

