#include <stdio.h>
#include <math.h>

int main(){
    float a = 3.;
    float x1, y1, x2, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("%.3f\n", hypotf(x2-x1, y2-y1));
    return 0;
}
