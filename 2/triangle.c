#include <stdio.h>

void print_repeat(char c, int n){
    while(--n >= 0)
        putchar(c);
}

int main(){
    int n, i = 0;
    scanf("%d", &n);
    for(; i < n; i++){
        print_repeat(' ', i);
        print_repeat('#', 2 * (n - i) - 1);
        puts("");
    }
    return 0;
}
