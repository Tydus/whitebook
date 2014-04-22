#include <stdio.h>

int main(){
    int m3, m5, m7;
    scanf("%d%d%d", &m3, &m5, &m7);

    int i = 10;
    for(; i <= 100; i++)
        if(i%3 == m3 && i%5 == m5 && i%7 == m7){
            printf("%d\n", i);
            return 0;
        }
    puts("No answer");
    return 0;
}

