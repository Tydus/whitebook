#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    double H = 0;
    int i = n;
    for(; i <= m; i++)
        H += 1. / i / i;
    printf("%.5lf\n", H);
    return 0;
}
