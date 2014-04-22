#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a < 0)
        a = -a;
    printf("%.2f\n", a);
    return 0;
}
