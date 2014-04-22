#include <stdio.h>

int main(){
    int n, digit = 1;
    scanf("%d", &n);
    while(n/=10)
        digit++;
    printf("%d\n", digit);
    return 0;
}

