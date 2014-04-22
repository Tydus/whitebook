#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    float p = n * 95;
    if(p >= 300)
        p = p * .85;
    printf("%.2f\n", p);
    return 0;
}
