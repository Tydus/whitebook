#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main(){
    float n;
    scanf("%f", &n);
    n = PI*n/180;
    printf("%.3f %.3f\n", sin(n), cos(n));
    return 0;
}

