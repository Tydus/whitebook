#include <stdio.h>

#define EXIT(x) {\
    puts(x); \
    return 0; \
}

int main(){
    int y;
    scanf("%d", &y);
    if(y%400 == 0)
        EXIT("yes");
    if(y%100 == 0)
        EXIT("no");
    if(y%  4 == 0)
        EXIT("yes");
    EXIT("no");
}
