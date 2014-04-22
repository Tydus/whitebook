#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float H = 0;
    int i = 0;
    for(i = 1; i <= n; i++)
        H += 1. / i;
    printf("%.3f\n", H);
    return 0;
}
