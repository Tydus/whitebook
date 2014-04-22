#include <stdio.h>

int sumdigit(int i){
    int ret = 0;
    while(i){
        ret += (i%10) * (i%10) * (i%10);
        i /= 10;
    }
    return ret;
}

int main(){
    int i = 100;
    for(; i < 1000; i++)
        if(sumdigit(i) == i)
            printf("%d\n", i);
    return 0;
}
