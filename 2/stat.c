#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    for(; i < n; i++)
        scanf("%d", a + i); // same as &a[i]

    int m;
    scanf("%d", &m);

    int count;
    for(i = 0; i < n; i++)
        if(a[i] < m) count++;
    printf("%d\n", count);
    return 0;
}

