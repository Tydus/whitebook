#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int *)a > *(int *)b;
}

int main(){
    int edge[3];
    int i = 0;
    for(; i < 3; i++){
        scanf("%d", &edge[i]);
        edge[i] = edge[i] * edge[i];
    }
    qsort(edge, 3, sizeof(int), cmp);
    if(edge[0] + edge[1] < edge[2]){
        puts("not a triangle");
        return 0;
    }
    if(edge[0] + edge[1] == edge[2])
        puts("yes");
    else
        puts("no");
    return 0;
}

